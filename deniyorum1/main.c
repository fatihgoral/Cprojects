#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NITELIK 100
#define CRITICAL_THRESHOLD 20
#define MAX_BECERI 25

// Karakterin temel nitelikleri ve becerileri
int can, tokluk, uyku, hijyen;
int para = 10, tecrube_puani = 0, seviye = 1;
int guc = 3, ceviklik = 3, dayaniklilik = 3, karizma = 3, toplama = 3;

// Temel niteliklerin kritik seviyelerini kontrol et
void kritik_nitelik_kontrol() {
    if (tokluk <= CRITICAL_THRESHOLD) {
        printf("UYARI: Tokluk seviyesi kritik! (Tokluk: %d)\n", tokluk);
    }
    if (uyku <= CRITICAL_THRESHOLD) {
        printf("UYARI: Uyku seviyesi kritik! (Uyku: %d)\n", uyku);
    }
    if (hijyen <= CRITICAL_THRESHOLD) {
        printf("UYARI: Hijyen seviyesi kritik! (Hijyen: %d)\n", hijyen);
    }
}

// Karakterin can�n� etkileyebilecek nitelikleri kontrol et
void can_kontrol() {
    if (tokluk == 0) {
        can -= 20;
        printf("UYARI: Tokluk seviyesi 0! Can�n�z azald�! (Can: %d)\n", can);
    }
    if (uyku == 0) {
        can -= 10;
        printf("UYARI: Uyku seviyesi 0! Can�n�z azald�! (Can: %d)\n", can);
    }
    if (can <= 0) {
        printf("Karakter �ld�! Oyun sona erdi.\n");
        exit(0); // Oyun sona eriyor
    }
}

// Temel nitelik art�r�m ve azalt�m fonksiyonlar�
void yemek_yemek() {
    int secim;
    printf("Yemek se�enekleri: 1) Ekmek  2) Yahni  3) Elma\n");
    scanf("%d", &secim);

    if (secim == 1) {
        tokluk += 10;
        uyku -= 5;
    } else if (secim == 2) {
        tokluk += 50;
        uyku -= 10;
    } else if (secim == 3) {
        tokluk += 5;
        uyku -= 2;
    }

    if (tokluk > MAX_NITELIK) tokluk = MAX_NITELIK;
    if (tokluk < 0) tokluk = 0;
    if (uyku > MAX_NITELIK) uyku = MAX_NITELIK;
    if (uyku < 0) uyku = 0;

    printf("Tokluk: %d, Uyku: %d\n", tokluk, uyku);
    can_kontrol(); // Can kontrol�n� yap
    kritik_nitelik_kontrol(); // Kritik seviyeleri kontrol et
}

void uyumak() {
    int uyku_suresi;
    printf("Uyuma s�resi girin (saat): ");
    scanf("%d", &uyku_suresi);

    uyku += uyku_suresi * 2; // Uyku art���
    tokluk -= uyku_suresi * 5; // Tokluk kayb�

    if (uyku > MAX_NITELIK) uyku = MAX_NITELIK;
    if (tokluk < 0) tokluk = 0;

    printf("Tokluk: %d, Uyku: %d\n", tokluk, uyku);
    can_kontrol(); // Can kontrol�n� yap
    kritik_nitelik_kontrol(); // Kritik seviyeleri kontrol et
}

// Yeni �ifahaneye gitme fonksiyonu
void sifahane_git() {
    int tedavi_secim;
    printf("�ifahaneye gitmek istiyorsunuz! Tedavi se�enekleri:\n1) Basit Tedavi (20 Can)\n2) Orta Tedavi (40 Can)\n3) G��l� Tedavi (60 Can)\n");
    scanf("%d", &tedavi_secim);

    if (tedavi_secim == 1) {
        can += 20;
        printf("Basit tedavi ald�n�z, can�n�z artt�! (Can: %d)\n", can);
    } else if (tedavi_secim == 2) {
        can += 40;
        printf("Orta tedavi ald�n�z, can�n�z artt�! (Can: %d)\n", can);
    } else if (tedavi_secim == 3) {
        can += 60;
        printf("G��l� tedavi ald�n�z, can�n�z artt�! (Can: %d)\n", can);
    }

    if (can > MAX_NITELIK) can = MAX_NITELIK;

    can_kontrol();
}

// �ifal� bitki toplama fonksiyonu
void sifali_bitki_toplama() {
    int bitki_bulma_sansi = (toplama * 4) / 100;
    int meyve_bulma_sansi = bitki_bulma_sansi;
    int av_sansi = meyve_bulma_sansi / 2;

    printf("�ifal� bitki bulma �ans�n�z: %d%%\n", bitki_bulma_sansi);
    printf("Meyve toplama �ans�n�z: %d%%\n", meyve_bulma_sansi);
    printf("Av yapma �ans�n�z: %d%%\n", av_sansi);

    int bitki_bulundu = rand() % 100 < bitki_bulma_sansi;
    int meyve_bulundu = rand() % 100 < meyve_bulma_sansi;
    int av_bulundu = rand() % 100 < av_sansi;

    if (bitki_bulundu) {
        can += 10;
        printf("�ifal� bitki buldunuz! Can�n�z 10 artt�! (Can: %d)\n", can);
    }
    if (meyve_bulundu) {
        tokluk += 10;
        printf("Meyve buldunuz! Toklu�unuz 10 artt�! (Tokluk: %d)\n", tokluk);
    }
    if (av_bulundu) {
        tokluk += 50;
        printf("Av hayvan� avlad�n�z! Toklu�unuz 50 artt�! (Tokluk: %d)\n", tokluk);
    }

    can_kontrol();
    kritik_nitelik_kontrol();
}

// Ke�fe ��kma fonksiyonu
void kesfe_cik() {
    int zorluk, rakip_guc, rakip_ceviklik, rakip_dayaniklilik;
    printf("Ke�fe ��kaca��n�z zorluk seviyesini se�in: 1) Kolay 2) Orta 3) Zor\n");
    scanf("%d", &zorluk);

    if (zorluk == 1) {
        rakip_guc = rand() % 3 + 1; // 1-3 aras�nda
        rakip_ceviklik = rand() % 3 + 1; // 1-3 aras�nda
        rakip_dayaniklilik = rand() % 3 + 1; // 1-3 aras�nda
    } else if (zorluk == 2) {
        rakip_guc = rand() % 3 + 4; // 4-6 aras�nda
        rakip_ceviklik = rand() % 3 + 4; // 4-6 aras�nda
        rakip_dayaniklilik = rand() % 3 + 4; // 4-6 aras�nda
    } else if (zorluk == 3) {
        rakip_guc = rand() % 4 + 7; // 7-10 aras�nda
        rakip_ceviklik = rand() % 4 + 7; // 7-10 aras�nda
        rakip_dayaniklilik = rand() % 4 + 7; // 7-10 aras�nda
    }

    printf("Kar��n�zdaki haydutun g��: %d, �eviklik: %d, dayan�kl�l�k: %d\n", rakip_guc, rakip_ceviklik, rakip_dayaniklilik);

    int secim;
    printf("Sava�mak m� (1) yoksa ka�mak m� (2) istersiniz?\n");
    scanf("%d", &secim);

    if (secim == 2) {
        int kacma_sansi = 4 * ceviklik / 100;
        if (rand() % 100 < kacma_sansi) {
            printf("Ba�ar�yla ka�t�n�z! Sava�madan kurtuldunuz.\n");
        } else {
            printf("Ka�may� ba�aramad�n�z, sava� ba�l�yor!\n");
            // Sava� ba�lat�l�r
            int rakip_hasar = 4 * rakip_guc;
            int savunan_hasar = rakip_hasar - (rakip_hasar * (4 * dayaniklilik / 100) - 1);
            can -= savunan_hasar;
            printf("Rakip size %d hasar verdi! (Can: %d)\n", rakip_hasar, can);
            can_kontrol();
        }
    } else {
        // Sava� ba�lar
        if (ceviklik >= rakip_ceviklik) {
            printf("Sava�ta ilk siz ba�l�yorsunuz!\n");
        } else {
            printf("Sava�ta rakip �nce ba�l�yor!\n");
        }
    }
}

int main() {
    srand(time(NULL));
    can = 100;
    tokluk = 50;
    uyku = 50;
    hijyen = 50;

    // Men�
    int secim;
    while (1) {
        printf("Ana Men�:\n");
        printf("1) Yemek Ye\n");
        printf("2) Uyuma\n");
        printf("3) �ifahaneye Git\n");
        printf("4) �ifal� Bitki Topla\n");
        printf("5) Ke�fe ��k\n");
        printf("6) ��k\n");
        printf("Se�iminizi yap�n: ");
        scanf("%d", &secim);

        if (secim == 1) {
            yemek_yemek();
        } else if (secim == 2) {
            uyumak();
        } else if (secim == 3) {
            sifahane_git();
        } else if (secim == 4) {
            sifali_bitki_toplama();
        } else if (secim == 5) {
            kesfe_cik();
        } else if (secim == 6) {
            break;
        } else {
            printf("Ge�ersiz se�im! Tekrar deneyin.\n");
        }
    }

    return 0;
}


