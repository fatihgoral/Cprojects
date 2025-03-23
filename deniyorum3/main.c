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

// Karakterin canini etkileyebilecek nitelikleri kontrol et
void can_kontrol() {
    if (nitelikler[1] == 0) {
        nitelikler[0] -= 20;
        printf("UYARI: Tokluk seviyesi 0! Caniniz azaldi! (Can: %d)\n", nitelikler[0]);
    }
    if (nitelikler[2] == 0) {
        nitelikler[0] -= 10;
        printf("UYARI: Uyku seviyesi 0! Caniniz azaldi! (Can: %d)\n", nitelikler[0]);
    }
    if (nitelikler[0] <= 0) {
        printf("Karakter oldu! Oyun sona erdi.\n");
        exit(0); // Oyun sona eriyor
    }
}

// Temel nitelik artirim ve azaltim fonksiyonlari
void yemek_yemek() {
    int secim;
    printf("Yemek secenekleri: 1) Ekmek  2) Yahni  3) Elma\n");
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
    can_kontrol(); // Can kontrolunu yap
    kritik_nitelik_kontrol(); // Kritik seviyeleri kontrol et
}

void uyumak() {
    int uyku_suresi;
    printf("Uyuma suresi girin (saat): ");
    scanf("%d", &uyku_suresi);

    nitelikler[2] += uyku_suresi * 2; // Uyku artisi
    nitelikler[1] -= uyku_suresi * 5; // Tokluk kaybi

    if (nitelikler[2] > MAX_NITELIK) nitelikler[2] = MAX_NITELIK;
    if (nitelikler[1] < 0) nitelikler[1] = 0;

    printf("Tokluk: %d, Uyku: %d\n", nitelikler[1], nitelikler[2]);
    can_kontrol(); // Can kontrolunu yap
    kritik_nitelik_kontrol(); // Kritik seviyeleri kontrol et
}

// Yeni sifahaneye gitme fonksiyonu
void sifahane_git() {
    int tedavi_secim;
    printf("Sifahaneye gitmek istiyorsunuz! Tedavi secenekleri:\n1) Basit Tedavi (20 Can)\n2) Orta Tedavi (40 Can)\n3) Guclu Tedavi (60 Can)\n");
    scanf("%d", &tedavi_secim);

    if (tedavi_secim == 1) {
        nitelikler[0] += 20;
        printf("Basit tedavi aldiniz, caniniz artti! (Can: %d)\n", nitelikler[0]);
    } else if (tedavi_secim == 2) {
        nitelikler[0] += 40;
        printf("Orta tedavi aldiniz, caniniz artti! (Can: %d)\n", nitelikler[0]);
    } else if (tedavi_secim == 3) {
        nitelikler[0] += 60;
        printf("Guclu tedavi aldiniz, caniniz artti! (Can: %d)\n", nitelikler[0]);
    }

    if (nitelikler[0] > MAX_NITELIK) nitelikler[0] = MAX_NITELIK;

    can_kontrol();
}

// Sifali bitki toplama fonksiyonu
void sifali_bitki_toplama() {
    int bitki_bulma_sansi = (beceriler[4] * 4) / 100;
    int meyve_bulma_sansi = bitki_bulma_sansi;
    int av_sansi = meyve_bulma_sansi / 2;

    printf("Sifali bitki bulma sansiniz: %d%%\n", bitki_bulma_sansi);
    printf("Meyve toplama sansiniz: %d%%\n", meyve_bulma_sansi);
    printf("Av yapma sansiniz: %d%%\n", av_sansi);

    int bitki_bulundu = rand() % 100 < bitki_bulma_sansi;
    int meyve_bulundu = rand() % 100 < meyve_bulma_sansi;
    int av_bulundu = rand() % 100 < av_sansi;

    if (bitki_bulundu) {
        nitelikler[0] += 10;
        printf("Sifali bitki buldunuz! Caniniz 10 artti! (Can: %d)\n", nitelikler[0]);
    }
    if (meyve_bulundu) {
        nitelikler[1] += 10;
        printf("Meyve buldunuz! Toklugunuz 10 artti! (Tokluk: %d)\n", nitelikler[1]);
    }
    if (av_bulundu) {
        nitelikler[1] += 50;
        printf("Av hayvani avladiniz! Toklugunuz 50 artti! (Tokluk: %d)\n", nitelikler[1]);
    }

    can_kontrol();
    kritik_nitelik_kontrol();
}

// Kesfe cikma fonksiyonu
void kesfe_cik() {
    int zorluk, rakip_guc, rakip_ceviklik, rakip_dayaniklilik;
    printf("Kesfe cikacaginiz zorluk seviyesini secin: 1) Kolay 2) Orta 3) Zor\n");
    scanf("%d", &zorluk);

    if (zorluk == 1) {
        rakip_guc = rand() % 3 + 1; // 1-3 arasinda
        rakip_ceviklik = rand() % 3 + 1; // 1-3 arasinda
        rakip_dayaniklilik = rand() % 3 + 1; // 1-3 arasinda
    } else if (zorluk == 2) {
        rakip_guc = rand() % 6 + 4; // 4-9 arasinda
        rakip_ceviklik = rand() % 6 + 4;
        rakip_dayaniklilik = rand() % 6 + 4;
    } else if (zorluk == 3) {
        rakip_guc = rand() % 10 + 10; // 10-19 arasinda
        rakip_ceviklik = rand() % 10 + 10;
        rakip_dayaniklilik = rand() % 10 + 10;
    }

    printf("Rakip nitelikleri: Guc: %d, Ceviklik: %d, Dayaniklilik: %d\n", rakip_guc, rakip_ceviklik, rakip_dayaniklilik);

    int sonuc = (beceriler[0] >= rakip_guc) + (beceriler[1] >= rakip_ceviklik) + (beceriler[2] >= rakip_dayaniklilik);

    if (sonuc >= 2) {
        printf("Kesfi basariyla tamamladiniz! Tecrube puani kazandiniz.\n");
        tecrube_puani += 20 * zorluk;
        para += 5 * zorluk;
    } else {
        printf("Kesif basarisiz oldu. Yaralandiniz!\n");
        nitelikler[0] -= 10 * zorluk;
        can_kontrol();
    }

    kritik_nitelik_kontrol();
}

int main() {
    srand(time(NULL)); // Rastgelelik icin zaman bazli tohum

    // Baslangic nitelikleri ve beceriler
    nitelikler[0] = 100; // Can
    nitelikler[1] = 50;  // Tokluk
    nitelikler[2] = 50;  // Uyku
    nitelikler[3] = 50;  // Hijyen

    for (int i = 0; i < 5; i++) {
        beceriler[i] = rand() % MAX_BECERI + 1;
    }

    printf("Oyun basladi!\n");
  char ad[50];
  printf("lutfen adi giriniz: ");
  scanf("%s",ad);

    int secim;
    while (1) {
        printf("Ne yapmak istersiniz?\n1) Yemek yemek\n2) Uyumak\n3) Sifahaneye gitmek\n4) Sifali bitki toplamak\n5) Kesfe cikmak\n6) Oyunu bitir\n");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                yemek_yemek();
                break;
            case 2:
                uyumak();
                break;
            case 3:
                sifahane_git();
                break;
            case 4:
                sifali_bitki_toplama();
                break;
            case 5:
                kesfe_cik();
                break;
            case 6:
                printf("Oyun sonlandiriliyor.\n");
                return 0;
            default:
                printf("Gecersiz secim!\n");

        }
    }
}

