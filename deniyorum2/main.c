#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NITELIK 100
#define CRITICAL_THRESHOLD 20
#define MAX_BECERI 25

// Karakterin temel nitelikleri ve becerileri
int nitelikler[4]; // [0] can, [1] tokluk, [2] uyku, [3] hijyen
int para = 10, tecrube_puani = 0, seviye = 1;
int beceriler[5]; // [0] guc, [1] ceviklik, [2] dayaniklilik, [3] karizma, [4] toplama

// Temel niteliklerin kritik seviyelerini kontrol et
void kritik_nitelik_kontrol() {
    for (int i = 1; i < 4; i++) {
        if (nitelikler[i] <= CRITICAL_THRESHOLD) {
            printf("UYARI: %s seviyesi kritik! (%s: %d)\n", (i == 1 ? "Tokluk" : (i == 2 ? "Uyku" : "Hijyen")),
                                                            (i == 1 ? "Tokluk" : (i == 2 ? "Uyku" : "Hijyen")), nitelikler[i]);
        }
    }
}

// Karakterin can�n� etkileyebilecek nitelikleri kontrol et
void can_kontrol() {
    if (nitelikler[1] == 0) {
        nitelikler[0] -= 20;
        printf("UYARI: Tokluk seviyesi 0! Can�n�z azald�! (Can: %d)\n", nitelikler[0]);
    }
    if (nitelikler[2] == 0) {
        nitelikler[0] -= 10;
        printf("UYARI: Uyku seviyesi 0! Can�n�z azald�! (Can: %d)\n", nitelikler[0]);
    }
    if (nitelikler[0] <= 0) {
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
        nitelikler[1] += 10; // Tokluk
        nitelikler[2] -= 5;  // Uyku
    } else if (secim == 2) {
        nitelikler[1] += 50;
        nitelikler[2] -= 10;
    } else if (secim == 3) {
        nitelikler[1] += 5;
        nitelikler[2] -= 2;
    }

    if (nitelikler[1] > MAX_NITELIK) nitelikler[1] = MAX_NITELIK;
    if (nitelikler[1] < 0) nitelikler[1] = 0;
    if (nitelikler[2] > MAX_NITELIK) nitelikler[2] = MAX_NITELIK;
    if (nitelikler[2] < 0) nitelikler[2] = 0;

    printf("Tokluk: %d, Uyku: %d\n", nitelikler[1], nitelikler[2]);
    can_kontrol(); // Can kontrol�n� yap
    kritik_nitelik_kontrol(); // Kritik seviyeleri kontrol et
}

void uyumak() {
    int uyku_suresi;
    printf("Uyuma s�resi girin (saat): ");
    scanf("%d", &uyku_suresi);

    nitelikler[2] += uyku_suresi * 2; // Uyku art���
    nitelikler[1] -= uyku_suresi * 5; // Tokluk kayb�

    if (nitelikler[2] > MAX_NITELIK) nitelikler[2] = MAX_NITELIK;
    if (nitelikler[1] < 0) nitelikler[1] = 0;

    printf("Tokluk: %d, Uyku: %d\n", nitelikler[1], nitelikler[2]);
    can_kontrol(); // Can kontrol�n� yap
    kritik_nitelik_kontrol(); // Kritik seviyeleri kontrol et
}

// Yeni �ifahaneye gitme fonksiyonu
void sifahane_git() {
    int tedavi_secim;
    printf("�ifahaneye gitmek istiyorsunuz! Tedavi se�enekleri:\n1) Basit Tedavi (20 Can)\n2) Orta Tedavi (40 Can)\n3) G��l� Tedavi (60 Can)\n");
    scanf("%d", &tedavi_secim);

    if (tedavi_secim == 1) {
        nitelikler[0] += 20;
        printf("Basit tedavi ald�n�z, can�n�z artt�! (Can: %d)\n", nitelikler[0]);
    } else if (tedavi_secim == 2) {
        nitelikler[0] += 40;
        printf("Orta tedavi ald�n�z, can�n�z artt�! (Can: %d)\n", nitelikler[0]);
    } else if (tedavi_secim == 3) {
        nitelikler[0] += 60;
        printf("G��l� tedavi ald�n�z, can�n�z artt�! (Can: %d)\n", nitelikler[0]);
    }

    if (nitelikler[0] > MAX_NITELIK) nitelikler[0] = MAX_NITELIK;

    can_kontrol();
}

// �ifal� bitki toplama fonksiyonu
void sifali_bitki_toplama() {
    int bitki_bulma_sansi = (beceriler[4] * 4) / 100;
    int meyve_bulma_sansi = bitki_bulma_sansi;
    int av_sansi = meyve_bulma_sansi / 2;

    printf("�ifal� bitki bulma �ans�n�z: %d%%\n", bitki_bulma_sansi);
    printf("Meyve toplama �ans�n�z: %d%%\n", meyve_bulma_sansi);
    printf("Av yapma �ans�n�z: %d%%\n", av_sansi);

    int bitki_bulundu = rand() % 100 < bitki_bulma_sansi;
    int meyve_bulundu = rand() % 100 < meyve_bulma_sansi;
    int av_bulundu = rand() % 100 < av_sansi;

    if (bitki_bulundu) {
        nitelikler[0] += 10;
        printf("�ifal� bitki buldunuz! Can�n�z 10 artt�! (Can: %d)\n", nitelikler[0]);
    }
    if (meyve_bulundu) {
        nitelikler[1] += 10;
        printf("Meyve buldunuz! Toklu�unuz 10 artt�! (Tokluk: %d)\n", nitelikler[1]);
    }
    if (av_bulundu) {
        nitelikler[1] += 50;
        printf("Av hayvan� avlad�n�z! Toklu�unuz 50 artt�! (Tokluk: %d)\n", nitelikler[1]);
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
        int kacma_sansi = 4 * beceriler[1] / 100;
        if (rand() % 100 < kacma_sansi) {
            printf("Ba�ar�yla ka�t�n�z! Sava�madan kurtuldunuz.\n");
        } else {
            printf("Ka�may� ba�aramad�n�z, sava� ba�l�yor!\n");
            // Sava� ba�lat�l�r
            int rakip_hasar = 4 * rakip_guc;
            int savunan_hasar = rakip_hasar - (rakip_hasar * (4 * beceriler[2] / 100) - 1);
            nitelikler[0] -= savunan_hasar;
            printf("Rakip size %d hasar verdi! (Can: %d)\n", rakip_hasar, nitelikler[0]);
            can_kontrol();
        }
    } else {
        // Sava� ba�lar
        if (beceriler[1] >= rakip_ceviklik) {
            printf("Sava�ta ilk siz ba�l�yorsunuz!\n");
        } else {
            printf("Sava�ta rakip �nce ba�l�yor!\n");
        }
    }
}

int main() {
    srand(time(NULL));
    nitelikler[0] = 100;
    nitelikler[1] = 50;
    nitelikler[2] = 50;
    nitelikler[3] = 50;

    // Beceri dizisini ba�lat
    beceriler[0] = 3; // guc
    beceriler[1] = 3; // ceviklik
    beceriler[2] = 3; // dayaniklilik
    beceriler[3] = 3; // karizma
    beceriler[4] = 3; // toplama

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

