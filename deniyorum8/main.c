#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Karakter özelliklerini dizide tutmak için sabitler
#define ALTIN 0
#define SEVIYE 1
#define TECRUBE 2
#define CAN 3
#define TOKLUK 4
#define UYKU 5
#define HIJYEN 6
#define SU 7
#define ENERJI 8
#define MORAL 9
#define GUC 10
#define CEVIKLIK 11
#define DAYANIKLILIK 12
#define KARIZMA 13
#define TOPLAYICILIK 14

// Karakter özellikleri dizisi
int ozellikler[15] = {10, 1, 0, 100, 100, 100, 100, 100, 100, 100, 3, 3, 3, 3, 3};

char ad[50];
char calgi[50];

void menuGoster();
void kampAlani(int[]);
void sifahane(int[]);
void han(int[]);
void macera(int[]);
void seviyeAtla(int[]);
void durumGoster(int[]);
void oyundanCik();

int main() {
    srand(time(NULL)); // Rastgele sayý üretimi için

    printf("Ozanin adini girin: ");
    gets(ad);
    printf("Ozanin kullandigi calgiyi girin: ");
    gets(calgi);

    int secim;
    while (1) {
        menuGoster();
        printf("Bir secenek secin: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                kampAlani(ozellikler);
                break;
            case 2:
                sifahane(ozellikler);
                break;
            case 3:
                han(ozellikler);
                break;
            case 4:
                macera(ozellikler);
                break;
            case 5:
                seviyeAtla(ozellikler);
                break;
            case 6:
                durumGoster(ozellikler);
                break;
            case 7:
                oyundanCik();
                break;
            default:
                printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
        }

        // Kritik nitelikler kontrol ediliyor
        if (ozellikler[TOKLUK] <= 0 || ozellikler[UYKU] <= 0 || ozellikler[HIJYEN] <= 0 || ozellikler[SU] <= 0 || ozellikler[ENERJI] <= 0) {
            int canKaybi = 0;
            if (ozellikler[TOKLUK] <= 0) canKaybi += 20;
            if (ozellikler[UYKU] <= 0) canKaybi += 10;
            if (ozellikler[HIJYEN] <= 0) canKaybi += 15;
            if (ozellikler[SU] <= 0) canKaybi += 10;
            if (ozellikler[ENERJI] <= 0) canKaybi += 25;

            ozellikler[CAN] -= canKaybi;
            printf("Nitelikler kritik seviyede! Caniniz %d azaldi.\n", canKaybi);

            if (ozellikler[CAN] <= 0) {
                printf("Caniniz tükendi. Oyun sona erdi!\n");
                return 0;
            }
        }
    }

    return 0;
}

void menuGoster() {
    printf("\n=== ANA MENU ===\n");
    printf("1. Kamp alanina git\n");
    printf("2. Sifahane git\n");
    printf("3. Hana git\n");
    printf("4. Maceraya atil\n");
    printf("5. Seviye atla\n");
    printf("6. Durumu goster\n");
    printf("7. Oyundan cik\n");
}

void kampAlani(int ozellikler[]) {
    printf("\n=== KAMP ALANI ===\n");
    printf("1. Kamp atesinin basinda calgi cal/sarki soyle\n");
    printf("2. Nehirde yikan\n");
    printf("3. Cadirina girip uyu\n");
    printf("4. Koy meydanina don\n");

    int secim;
    printf("Bir secenek secin: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("Calginizi calmaya basladiniz... Moral artiyor!\n");
            ozellikler[MORAL] += 10;
            ozellikler[ENERJI] -= 5;
            break;
        case 2:
            printf("Nehirde yikaniyorsunuz... Hijyen ve su artiyor!\n");
            ozellikler[HIJYEN] += 20;
            ozellikler[SU] += 15;
            break;
        case 3:
            printf("Cadirinizda uyuyorsunuz... Uyku ve enerji seviyeniz yenilendi!\n");
            ozellikler[UYKU] += 30;
            ozellikler[ENERJI] += 20;
            break;
        case 4:
            printf("Koy meydanina geri donuyorsunuz...\n");
            return;
        default:
            printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
            return;
    }
    printf("Guncel Durum -> Hijyen: %d, Uyku: %d, Su: %d, Enerji: %d, Moral: %d\n", ozellikler[HIJYEN], ozellikler[UYKU], ozellikler[SU], ozellikler[ENERJI], ozellikler[MORAL]);
}

void sifahane(int ozellikler[]) {
    printf("\n=== SIFAHANE ===\n");
    printf("1. Yaralarinizi sarmasini isteyin\n");
    printf("2. Merhem yaptirip surmesini isteyin\n");
    printf("3. Koy meydanina don\n");

    int secim;
    printf("Bir secenek secin: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("Sifaci yaralarinizi sariyor... Can artiyor!\n");
            ozellikler[CAN] += 20;
            break;
        case 2:
            printf("Sifaci size merhem yapip uyguluyor... Can artiyor!\n");
            ozellikler[CAN] += 15;
            break;
        case 3:
            printf("Koy meydanina geri donuyorsunuz...\n");
            return;
        default:
            printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
            return;
    }
    printf("Guncel Durum -> Can: %d\n", ozellikler[CAN]);
}

void han(int ozellikler[]) {
    printf("\n=== HAN ===\n");
    printf("1. Yiyecek satin al ve ye\n");
    printf("2. Icecek satin al, ic ve eglen\n");
    printf("3. Enstruman cal ve sarki soyle\n");
    printf("4. Koy meydanina don\n");

    int secim;
    printf("Bir secenek secin: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("Yemek yiyorsunuz... Tokluk ve moral artiyor!\n");
            ozellikler[TOKLUK] += 20;
            ozellikler[MORAL] += 10;
            ozellikler[ALTIN] -= 5;
            break;
        case 2:
            printf("Icecek satin alip iciyorsunuz... Moral artiyor!\n");
            ozellikler[MORAL] += 15;
            ozellikler[ALTIN] -= 3;
            break;
        case 3:
            if (ozellikler[HIJYEN] > 20) {
                int kazanc = 10 + (ozellikler[KARIZMA] * ozellikler[HIJYEN]) / 100;
                printf("Sarki soyleyerek %d altin kazandiniz!\n", kazanc);
                ozellikler[ALTIN] += kazanc;
                ozellikler[TECRUBE] += 20;
            } else {
                printf("Hijyeniniz dusuk, sarki soyleyemezsiniz!\n");
                return;
            }
            break;
        case 4:
            printf("Koy meydanina geri donuyorsunuz...\n");
            return;
        default:
            printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
            return;
    }
    printf("Guncel Durum -> Tokluk: %d, Hijyen: %d, Altin: %d, Moral: %d\n", ozellikler[TOKLUK], ozellikler[HIJYEN], ozellikler[ALTIN], ozellikler[MORAL]);
}

void macera(int ozellikler[]) {
    printf("\n=== MACERA ===\n");
    printf("1. Yakin cevrede bitki topla ve avlan\n");
    printf("2. Ormani kesfet (kolay)\n");
    printf("3. Kayaliklari kesfet (orta)\n");
    printf("4. Vadiyi kesfet (zor)\n");
    printf("5. Koy meydanina don\n");

    int secim;
    printf("Bir secenek secin: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            if ((ozellikler[TOPLAYICILIK] * 4) / 100 >= rand() % 100) {
                printf("Sifali bitki buldunuz! Can artiyor.\n");
                ozellikler[CAN] += 10;
                ozellikler[TOKLUK] += 5;
            } else {
                printf("Hicbir sey bulamadiniz.\n");
            }
            break;
        case 2:
        case 3:
        case 4:
            printf("Kesif basliyor... (Bu bolum gelistirilebilir.)\n");
            break;
        case 5:
            printf("Koy meydanina geri donuyorsunuz...\n");
            return;
        default:
            printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
            return;
    }
    printf("Guncel Durum -> Can: %d, Tokluk: %d\n", ozellikler[CAN], ozellikler[TOKLUK]);
}

void seviyeAtla(int ozellikler[]) {
    if (ozellikler[TECRUBE] >= 100) {
        printf("Tebrikler! Seviye atladiniz.\n");
        ozellikler[SEVIYE]++;
        ozellikler[TECRUBE] = 0;

        int puan = 5;
        while (puan > 0) {
            printf("Beceri dagilimi icin kalan puan: %d\n", puan);
            printf("1. Guc\n2. Ceviklik\n3. Dayaniklilik\n4. Karizma\n5. Toplayicilik\n");
            printf("Bir secim yapin: ");
            int secim;
            scanf("%d", &secim);

            switch (secim) {
                case 1:
                    ozellikler[GUC]++;
                    break;
                case 2:
                    ozellikler[CEVIKLIK]++;
                    break;
                case 3:
                    ozellikler[DAYANIKLILIK]++;
                    break;
                case 4:
                    ozellikler[KARIZMA]++;
                    break;
                case 5:
                    ozellikler[TOPLAYICILIK]++;
                    break;
                default:
                    printf("Gecersiz secim!\n");
                    continue;
            }
            puan--;
        }
    } else {
        printf("Seviye atlamak icin yeterli tecrubeniz yok!\n");
    }
    printf("Guncel Durum -> Guc: %d, Ceviklik: %d, Dayaniklilik: %d, Karizma: %d, Toplayicilik: %d\n", ozellikler[GUC], ozellikler[CEVIKLIK], ozellikler[DAYANIKLILIK], ozellikler[KARIZMA], ozellikler[TOPLAYICILIK]);
}

void durumGoster(int ozellikler[]) {
    printf("\n=== OZANIN DURUMU ===\n");
    printf("Ad: %s\n", ad);
    printf("Calgi: %s\n", calgi);
    printf("Altin: %d\n", ozellikler[ALTIN]);
    printf("Seviye: %d\n", ozellikler[SEVIYE]);
    printf("Tecrube: %d\n", ozellikler[TECRUBE]);
    printf("Can: %d\n", ozellikler[CAN]);
    printf("Tokluk: %d\n", ozellikler[TOKLUK]);
    printf("Uyku: %d\n", ozellikler[UYKU]);
    printf("Hijyen: %d\n", ozellikler[HIJYEN]);
    printf("Su: %d\n", ozellikler[SU]);
    printf("Enerji: %d\n", ozellikler[ENERJI]);
    printf("Moral: %d\n", ozellikler[MORAL]);
    printf("Guc: %d\n", ozellikler[GUC]);
    printf("Ceviklik: %d\n", ozellikler[CEVIKLIK]);
    printf("Dayaniklilik: %d\n", ozellikler[DAYANIKLILIK]);
    printf("Karizma: %d\n", ozellikler[KARIZMA]);
    printf("Toplayicilik: %d\n", ozellikler[TOPLAYICILIK]);
}

void oyundanCik() {
    printf("Cikmak istediginize emin misiniz? (1: Evet, 0: Hayir): ");
    int onay;
    scanf("%d", &onay);
    if (onay == 1) {
        printf("Oyun kapatiliyor...\n");
        exit(0);
    } else {
        printf("Oyuna devam ediliyor...\n");
    }
}


