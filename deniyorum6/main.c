// Oyunun devam eden kodu
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Karakter özellikleri
char ad[50];
char calgi[50];
int altin = 10;
int seviye = 1;
int tecrube = 0;
int can = 100;
int tokluk = 100;
int uyku = 100;
int hijyen = 100;
int guc = 3;
int ceviklik = 3;
int dayaniklilik = 3;
int karizma = 3;
int toplayicilik = 3;

void menuGoster();
void kampAlani();
void sifahane();
void han();
void macera();
void seviyeAtla();
void durumGoster();
void oyundanCik();

int main() {
    srand(time(NULL)); // Rastgele sayý üretimi için

    printf("Ozanin adini girin: ");
    scanf("%s", ad);
    printf("Ozanin kullandigi calgiyi girin: ");
    scanf("%s", calgi);

    int secim;
    while (1) {
        menuGoster();
        printf("Bir secenek secin: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                kampAlani();
                break;
            case 2:
                sifahane();
                break;
            case 3:
                han();
                break;
            case 4:
                macera();
                break;
            case 5:
                seviyeAtla();
                break;
            case 6:
                durumGoster();
                break;
            case 7:
                oyundanCik();
                break;
            default:
                printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
        }

        // Kritik nitelikler kontrol ediliyor
        if (tokluk <= 0 || uyku <= 0 || hijyen <= 0) {
            int canKaybi = 0;
            if (tokluk <= 0) canKaybi += 20;
            if (uyku <= 0) canKaybi += 10;
            if (hijyen <= 0) canKaybi += 15;

            can -= canKaybi;
            printf("Nitelikler kritik seviyede! Caniniz %d azaldi.\n", canKaybi);

            if (can <= 0) {
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

void kampAlani() {
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
            printf("Calginizi calmaya basladiniz... Mutluluk artiyor!\n");
            hijyen -= 5;
            break;
        case 2:
            printf("Nehirde yikaniyorsunuz... Hijyen artiyor!\n");
            hijyen += 20;
            break;
        case 3:
            printf("Cadirinizda uyuyorsunuz... Uyku seviyeniz yenilendi!\n");
            uyku += 30;
            break;
        case 4:
            printf("Koy meydanina geri donuyorsunuz...\n");
            return;
        default:
            printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
            return;
    }
    printf("Guncel Durum -> Hijyen: %d, Uyku: %d\n", hijyen, uyku);
}

void sifahane() {
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
            can += 20;
            break;
        case 2:
            printf("Sifaci size merhem yapip uyguluyor... Can artiyor!\n");
            can += 15;
            break;
        case 3:
            printf("Koy meydanina geri donuyorsunuz...\n");
            return;
        default:
            printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
            return;
    }
    printf("Guncel Durum -> Can: %d\n", can);
}

void han() {
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
            printf("Yemek yiyorsunuz... Tokluk artiyor!\n");
            tokluk += 20;
            altin -= 5;
            break;
        case 2:
            printf("Icecek satin alip iciyorsunuz...\n");
            tokluk += 10;
            hijyen -= 5;
            altin -= 3;
            break;
        case 3:
            if (hijyen > 20) {
                int kazanc = 10 + (karizma * hijyen) / 100;
                printf("Sarki soyleyerek %d altin kazandiniz!\n", kazanc);
                altin += kazanc;
                tecrube += 20;
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
    printf("Guncel Durum -> Tokluk: %d, Hijyen: %d, Altin: %d\n", tokluk, hijyen, altin);
}

void macera() {
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
            if ((toplayicilik * 4) / 100 >= rand() % 100) {
                printf("Sifali bitki buldunuz! Can artiyor.\n");
                can += 10;
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
    printf("Guncel Durum -> Can: %d\n", can);
}

void seviyeAtla() {
    if (tecrube >= 100) {
        printf("Tebrikler! Seviye atladiniz.\n");
        seviye++;
        tecrube = 0;

        int puan = 5;
        while (puan > 0) {
            printf("Beceri dagilimi icin kalan puan: %d\n", puan);
            printf("1. Guc\n2. Ceviklik\n3. Dayaniklilik\n4. Karizma\n5. Toplayicilik\n");
            printf("Bir secim yapin: ");
            int secim;
            scanf("%d", &secim);

            switch (secim) {
                case 1:
                    guc++;
                    break;
                case 2:
                    ceviklik++;
                    break;
                case 3:
                    dayaniklilik++;
                    break;
                case 4:
                    karizma++;
                    break;
                case 5:
                    toplayicilik++;
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
    printf("Guncel Durum -> Guc: %d, Ceviklik: %d, Dayaniklilik: %d, Karizma: %d, Toplayicilik: %d\n", guc, ceviklik, dayaniklilik, karizma, toplayicilik);
}

void durumGoster() {
    printf("\n=== OZANIN DURUMU ===\n");
    printf("Ad: %s\n", ad);
    printf("Calgi: %s\n", calgi);
    printf("Altin: %d\n", altin);
    printf("Seviye: %d\n", seviye);
    printf("Tecrube: %d\n", tecrube);
    printf("Can: %d\n", can);
    printf("Tokluk: %d\n", tokluk);
    printf("Uyku: %d\n", uyku);
    printf("Hijyen: %d\n", hijyen);
    printf("Guc: %d\n", guc);
    printf("Ceviklik: %d\n", ceviklik);
    printf("Dayaniklilik: %d\n", dayaniklilik);
    printf("Karizma: %d\n", karizma);
    printf("Toplayicilik: %d\n", toplayicilik);
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

