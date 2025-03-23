#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

        if (ozellikler[TOKLUK] <= 20)
                printf("Tokluk seviyesi %d ye kadar dustu dikkat !!! \n",ozellikler[TOKLUK]);
        if (ozellikler[UYKU] <= 20)
                printf("Uyku seviyesi %d ye kadar dustu dikkat !!! \n",ozellikler[UYKU]);
        if (ozellikler[HIJYEN] <= 20)
                printf("Hijyen seviyesi %d ye kadar dustu dikkat !!! \n",ozellikler[HIJYEN]);
        if (ozellikler[SU] <= 20)
                printf("Su seviyesi %d ye kadar dustu dikkat !!! \n",ozellikler[SU]);
        if (ozellikler[ENERJI] <= 20)
                printf("Enerji seviyesi %d ye kadar dustu dikkat !!! \n",ozellikler[ENERJI]);
        // Kritik nitelikler kontrol ediliyor
        if (ozellikler[TOKLUK] <= 0 || ozellikler[UYKU] <= 0 || ozellikler[HIJYEN] <= 0 || ozellikler[SU] <= 0 || ozellikler[ENERJI] <= 0) {

            int canKaybi = 0;

            if (ozellikler[TOKLUK] <= 0)
                canKaybi += 20;
            if (ozellikler[UYKU] <= 0)
                canKaybi += 10;
            if (ozellikler[HIJYEN] <= 0)
                canKaybi += 15;
            if (ozellikler[SU] <= 0)
                canKaybi += 10;
            if (ozellikler[ENERJI] <= 0)
                canKaybi += 25;

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
    printf("Degisen Durum -> Hijyen: %d, Uyku: %d, Su: %d, Enerji: %d, Moral: %d\n", ozellikler[HIJYEN], ozellikler[UYKU], ozellikler[SU], ozellikler[ENERJI], ozellikler[MORAL]);
    printf("Karakterin Temel Niteliklerinin Guncel Durumu -> Tokluk: %d, Uyku: %d, Hijyen: %d, Su: %d, Enerji: %d\n", ozellikler[HIJYEN], ozellikler[UYKU], ozellikler[SU], ozellikler[ENERJI], ozellikler[MORAL]);
}

void sifahane(int ozellikler[]) {
    printf("\n=== SIFAHANE ===\n");
    printf("1. Pahali tedavi (3 altin, +30 Can)\n");
    printf("2. Orta tedavi (2 altin, +20 Can)\n");
    printf("3. Ucuz tedavi (1 altin, +10 Can)\n");
    printf("4. Koy meydanina don\n");

    int secim;
    printf("Bir secenek secin: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            if (ozellikler[ALTIN] >= 3) {
                printf("Pahali tedavi aliniyor...\n");
                ozellikler[ALTIN] -= 3;
                ozellikler[CAN] += 30;
            } else
                printf("Yeterli altininiz yok!\n");
            break;
        case 2:
            if (ozellikler[ALTIN] >= 2) {
                printf("Orta tedavi aliniyor...\n");
                ozellikler[ALTIN] -= 2;
                ozellikler[CAN] += 20;
            } else
                printf("Yeterli altininiz yok!\n");
            break;
        case 3:
            if (ozellikler[ALTIN] >= 1) {
                printf("Ucuz tedavi aliniyor...\n");
                ozellikler[ALTIN] -= 1;
                ozellikler[CAN] += 10;
            } else printf("Yeterli altininiz yok!\n");
            break;
        case 4:
            printf("Koy meydanina geri donuyorsunuz...\n");
            return;
        default:
            printf("Gecersiz secim! Tekrar deneyin.\n");
    }
    printf("Degisen Durum -> Altin : %d , Can : %d",ozellikler[ALTIN],ozellikler[CAN]);
    printf("Karakterin Temel Niteliklerinin Guncel Durumu -> Tokluk: %d, Uyku: %d, Hijyen: %d, Su: %d, Enerji: %d\n", ozellikler[HIJYEN], ozellikler[UYKU], ozellikler[SU], ozellikler[ENERJI], ozellikler[MORAL]);
}

void han(int ozellikler[]) {
    printf("\n=== HAN ===\n");
    printf("1. Yiyecek satin al ve ye\n");
    printf("2. Icecek satin al, ic ve eglen\n");
    printf("3. Enstruman cal ve sarki soyle\n");
    printf("4. Koy meydanina don\n");

    int secim;
    int yiyecek_secimi;
    int icecek_secimi;
    printf("Bir secenek secin: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:

            do{
                printf("Yemek yiyorsunuz...\n");
                printf("Yiyecekler ve fiyatlari listesi...\n");
                printf("1-)Lahmacun=Tokluk 30 puan , fiyat = 3 altin \n");
                printf("2-)Iskender=Tokluk 50 puan , fiyat = 5 altin \n");
                printf("3-)Muz=Tokluk 10 puan , fiyat = 1 altin \n");

                printf("Hangi yiyecegi sectiniz \n");
                scanf("%d",&yiyecek_secimi);
                if(yiyecek_secimi == 1){
                    ozellikler[TOKLUK] += 30;
                    ozellikler[ALTIN] -= 3;
                    ozellikler[MORAL] += 10;
                    ozellikler[UYKU] -=10;
                    ozellikler[HIJYEN] -=20;
                    ozellikler[SU] -=15;
                    ozellikler[ENERJI] +=15;

                }else if(yiyecek_secimi == 2){
                    ozellikler[TOKLUK] += 50;
                    ozellikler[ALTIN] -= 5;
                    ozellikler[MORAL] += 10;
                    ozellikler[UYKU] -=10;
                    ozellikler[HIJYEN] -=25;
                    ozellikler[SU] -=20;
                    ozellikler[ENERJI] +=25;
                }
                else if(yiyecek_secimi == 3){
                    ozellikler[TOKLUK] += 10;
                    ozellikler[ALTIN] -= 1;
                    ozellikler[MORAL] += 10;
                    ozellikler[UYKU] -=5;
                    ozellikler[HIJYEN] -=10;
                    ozellikler[SU] -=5;
                    ozellikler[ENERJI] +=10;
                }
            else
                printf("Hatali secim yaptiniz.Tekrar seciniz.\n...");
            }while(yiyecek_secimi<0 || yiyecek_secimi>3);


            break;
        case 2:

            do{
                printf("Icecek iciyorsunuz...\n");
                printf("Icecekler ve fiyatlari listesi...\n");
                printf("1-)Su = Su 30 puan , fiyat = 1 altin \n");
                printf("2-)Enerji icecegi = Su 20 puan , fiyat = 2 altin \n");
                printf("3-)Milkshake = Su 10 puan , fiyat = 3 altin \n");

                printf("Hangi icegi sectiniz \n");
                scanf("%d",&icecek_secimi);
                if(icecek_secimi == 1){
                    ozellikler[SU] += 30;
                    ozellikler[ALTIN] -= 1;
                    ozellikler[MORAL] += 10;
                    ozellikler[UYKU] -=10;
                    ozellikler[ENERJI] +=10;

                }else if(icecek_secimi == 2){
                    ozellikler[TOKLUK] += 10;
                    ozellikler[ALTIN] -= 2;
                    ozellikler[MORAL] += 10;
                    ozellikler[UYKU] -=10;
                    ozellikler[HIJYEN] -=5;
                    ozellikler[SU] +=20;
                    ozellikler[ENERJI] +=30;
                }
                else if(icecek_secimi == 3){
                    ozellikler[TOKLUK] += 12;
                    ozellikler[ALTIN] -=3;
                    ozellikler[MORAL] += 10;
                    ozellikler[UYKU] -=10;
                    ozellikler[HIJYEN] -=10;
                    ozellikler[SU] +=10;
                    ozellikler[ENERJI] +=20;
                }
            else
                printf("Hatali secim yaptiniz.Tekrar seciniz.\n...");
            }while(icecek_secimi<0 ||icecek_secimi>3);

        case 3:
            if (ozellikler[HIJYEN] > 20) {
                printf("Hana Hosgeldiniz...\n");
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
    if(ozellikler[TOKLUK]>100)
        ozellikler[TOKLUK]=100;
    if(ozellikler[TOKLUK]<0)
        ozellikler[TOKLUK]=0;
    if(ozellikler[UYKU]>100)
        ozellikler[UYKU] =100;
    if(ozellikler[UYKU]<0)
        ozellikler[UYKU] = 0;
    if(ozellikler[SU] > 100)
        ozellikler[SU] = 100;
    if(ozellikler[SU] < 0)
        ozellikler[SU] = 0;
    if(ozellikler[HIJYEN] > 100)
        ozellikler[HIJYEN]= 100;
    if(ozellikler[HIJYEN] < 0)
        ozellikler[HIJYEN] = 0;
    if(ozellikler[ENERJI] > 100)
        ozellikler[ENERJI] = 100;
    if(ozellikler[ENERJI] < 0)
        ozellikler[ENERJI] = 0;


    printf("Degisen Durum -> Tokluk: %d, Hijyen: %d, Altin: %d, Moral: %d\n", ozellikler[TOKLUK], ozellikler[HIJYEN], ozellikler[ALTIN], ozellikler[MORAL]);
}

void macera(int ozellikler[]) {
    printf("\n=== MACERA ===\n");
    printf("1. Yakın çevreden şifalı bitki topla ve avlan\n");
    printf("2. Ormanı keşfe çık (Kolay)\n");
    printf("3. Kayalıkları keşfe çık (Orta)\n");
    printf("4. Vadiyi keşfe çık (Zor)\n");
    printf("5. Köy meydanına dön\n");

    int secim;
    printf("Bir secenek secin: ");
    scanf("%d", &secim);

    switch (secim) {
            case 1:
            {
            // Şifalı bitki toplama ve avlanma işlemi
                printf("Yakın çevreden şifalı bitki toplama ve avlanma başladı!\n");

                int sans = rand() % 100; // Rastgele şans değeri (0-99 arası)
                double toplayicilikSans = (ozellikler[TOPLAYICILIK] * 4) / 100.0; // Yüzdelik oran hesaplama
                int toplayicilikSans2 = toplayicilikSans * 100; // Ondalık değeri tam sayı yapmak için

                if (sans < toplayicilikSans2) {
                // Şifalı bitki bulundu
                printf("Şifalı bitki buldunuz! +10 Can\n");
                ozellikler[CAN] += 10;

                // Aynı şansla meyve toplama kontrolü
                    if (sans < toplayicilikSans2) {
                    printf("Aynı zamanda meyve de topladınız! +10 Tokluk\n");
                    ozellikler[TOKLUK] += 10;

                    // Meyve toplama gerçekleşirse yarı şansla avlanma kontrolü
                    if ((rand() % 100) < 50) { // %50 şans
                        printf("Ve şanslısınız! Bir av hayvanı avladınız! +50 Tokluk\n");
                        ozellikler[TOKLUK] += 50;
                    }
                }
            } else {
                printf("Hiçbir şey bulamadınız.\n");
            }
            break;
        }

        case 2:
            // Ormanı keşfe çık (Kolay)
            printf("Ormanda kolay bir keşfe çıktınız!\n");

            // Kolay keşif - Haydutla savaş
            {
                int dusmanGuc = rand() % 3 + 1;
                int dusmanCeviklik = rand() % 3 + 1;
                int dusmanDayaniklilik = rand() % 3 + 1;
                printf("Haydut: Guc: %d, Ceviklik: %d, Dayaniklilik: %d\n", dusmanGuc, dusmanCeviklik, dusmanDayaniklilik);

                int kacisBasarisi = 4 * (ozellikler[CEVIKLIK] / 100.0); // Kaçma şansı
                int kacis = rand() % 100;

                printf("Kaçma şansı: %d%%, Şans: %d%%\n", kacisBasarisi * 100, kacis);

                if (kacis < kacisBasarisi * 100) {
                    printf("Başarıyla kaçtınız!\n");
                } else {
                    printf("Kaçamadınız, savaş başlıyor...\n");

                    // Savaş başlıyor
                    int oyuncuGuc = ozellikler[GUC];
                    int oyuncuCeviklik = ozellikler[CEVIKLIK];
                    int oyuncuDayaniklilik = ozellikler[DAYANIKLILIK];

                    // Çevikliği büyük olan önce başlar
                    int oyuncuIlkSaldiri = 0;
                    if (oyuncuCeviklik > dusmanCeviklik) {
                        oyuncuIlkSaldiri = 1;
                    } else if (oyuncuCeviklik == dusmanCeviklik) {
                        if (rand() % 2 == 0) {
                            oyuncuIlkSaldiri = 1;
                        }
                    }

                    // Savaş
                    int oyuncuCan = ozellikler[CAN];
                    int dusmanCan = 100; // Başlangıçta haydutun canı 100

                    while (oyuncuCan > 0 && dusmanCan > 0) {
                        if (oyuncuIlkSaldiri) {
                            // Ozan saldırıyor
                            int oyuncuSaldiri = 4 * oyuncuGuc;
                            dusmanCan -= oyuncuSaldiri;
                            printf("Ozan saldırdı: %d hasar verdi\n", oyuncuSaldiri);

                            if (dusmanCan <= 0) {
                                break;
                            }

                            // Haydut savunuyor
                            int dusmanSavunma = 4 * dusmanDayaniklilik;
                            int alinanHasar = dusmanSavunma - (dusmanSavunma * (4 * oyuncuDayaniklilik / 100.0));
                            oyuncuCan -= alinanHasar;
                            printf("Haydut savundu, Ozan'a %d hasar verdi\n", alinanHasar);
                        } else {
                            // Haydut saldırıyor
                            int dusmanSaldiri = 4 * dusmanGuc;
                            oyuncuCan -= dusmanSaldiri;
                            printf("Haydut saldırdı: %d hasar verdi\n", dusmanSaldiri);

                            if (oyuncuCan <= 0) {
                                break;
                            }

                            // Ozan savunuyor
                            int oyuncuSavunma = 4 * oyuncuDayaniklilik;
                            int alinanHasar = oyuncuSavunma - (oyuncuSavunma * (4 * dusmanDayaniklilik / 100.0));
                            dusmanCan -= alinanHasar;
                            printf("Ozan savundu, Haydut'a %d hasar verdi\n", alinanHasar);
                        }

                        // Çevikliği büyük olan bir sonraki saldırıyı yapar
                        oyuncuIlkSaldiri = 1 - oyuncuIlkSaldiri;
                    }

                    if (oyuncuCan > 0) {
                        // Kazanıldı
                        printf("Kazandiniz!\n");
                        ozellikler[TECRUBE] += 30;
                        ozellikler[ALTIN] += (rand() % 11 + 15);  // 15-25 arasında rastgele altın
                        printf("Haydut ganimeti: %d altin kazandiniz!\n", ozellikler[ALTIN]);
                    } else {
                        printf("Kaybettiniz!\n");
                        ozellikler[CAN] -= 30;
                    }
                }
            }
            break;

        case 3:
            // Kayalıkları keşfe çık (Orta)
            printf("Kayaliklarda orta zorlukta bir keşfe çıktınız!\n");

            // Orta keşif - Haydutla savaş
            {
                int dusmanGuc = rand() % 3 + 4;
                int dusmanCeviklik = rand() % 3 + 4;
                int dusmanDayaniklilik = rand() % 3 + 4;
                printf("Haydut: Guc: %d, Ceviklik: %d, Dayaniklilik: %d\n", dusmanGuc, dusmanCeviklik, dusmanDayaniklilik);

                int kacisBasarisi = 4 * (ozellikler[CEVIKLIK] / 100.0); // Kaçma şansı
                int kacis = rand() % 100;

                printf("Kaçma şansı: %d%%, Şans: %d%%\n", kacisBasarisi * 100, kacis);

                if (kacis < kacisBasarisi * 100) {
                    printf("Başarıyla kaçtınız!\n");
                } else {
                    printf("Kaçamadınız, savaş başlıyor...\n");

                    // Savaş başlıyor
                    int oyuncuGuc = ozellikler[GUC];
                    int oyuncuCeviklik = ozellikler[CEVIKLIK];
                    int oyuncuDayaniklilik = ozellikler[DAYANIKLILIK];

                    // Çevikliği büyük olan önce başlar
                    int oyuncuIlkSaldiri = 0;
                    if (oyuncuCeviklik > dusmanCeviklik) {
                        oyuncuIlkSaldiri = 1;
                    } else if (oyuncuCeviklik == dusmanCeviklik) {
                        if (rand() % 2 == 0) {
                            oyuncuIlkSaldiri = 1;
                        }
                    }

                    // Savaş
                    int oyuncuCan = ozellikler[CAN];
                    int dusmanCan = 100; // Başlangıçta haydutun canı 100

                    while (oyuncuCan > 0 && dusmanCan > 0) {
                        if (oyuncuIlkSaldiri) {
                            // Ozan saldırıyor
                            int oyuncuSaldiri = 4 * oyuncuGuc;
                            dusmanCan -= oyuncuSaldiri;
                            printf("Ozan saldırdı: %d hasar verdi\n", oyuncuSaldiri);

                            if (dusmanCan <= 0) {
                                break;
                            }

                            // Haydut savunuyor
                            int dusmanSavunma = 4 * dusmanDayaniklilik;
                            int alinanHasar = dusmanSavunma - (dusmanSavunma * (4 * oyuncuDayaniklilik / 100.0));
                            oyuncuCan -= alinanHasar;
                            printf("Haydut savundu, Ozan'a %d hasar verdi\n", alinanHasar);
                        } else {
                            // Haydut saldırıyor
                            int dusmanSaldiri = 4 * dusmanGuc;
                            oyuncuCan -= dusmanSaldiri;
                            printf("Haydut saldırdı: %d hasar verdi\n", dusmanSaldiri);

                            if (oyuncuCan <= 0) {
                                break;
                            }

                            // Ozan savunuyor
                            int oyuncuSavunma = 4 * oyuncuDayaniklilik;
                            int alinanHasar = oyuncuSavunma - (oyuncuSavunma * (4 * dusmanDayaniklilik / 100.0));
                            dusmanCan -= alinanHasar;
                            printf("Ozan savundu, Haydut'a %d hasar verdi\n", alinanHasar);
                        }

                        // Çevikliği büyük olan bir sonraki saldırıyı yapar
                        oyuncuIlkSaldiri = 1 - oyuncuIlkSaldiri;
                    }

                    if (oyuncuCan > 0) {
                        // Kazanıldı
                        printf("Kazandiniz!\n");
                        ozellikler[TECRUBE] += 40;
                        ozellikler[ALTIN] += (rand() % 11 + 25);  // 25-35 arasında rastgele altın
                        printf("Haydut ganimeti: %d altin kazandiniz!\n", ozellikler[ALTIN]);
                    } else {
                        printf("Kaybettiniz!\n");
                        ozellikler[CAN] -= 40;
                    }
                }
            }
            break;

        case 4:
            // Vadiyi keşfe çık (Zor)
            printf("Vadiye zor bir keşfe çıktınız!\n");

            // Zor keşif - Haydutla savaş
            {
                int dusmanGuc = rand() % 3 + 7;
                int dusmanCeviklik = rand() % 3 + 7;
                int dusmanDayaniklilik = rand() % 3 + 7;
                printf("Haydut: Guc: %d, Ceviklik: %d, Dayaniklilik: %d\n", dusmanGuc, dusmanCeviklik, dusmanDayaniklilik);

                int kacisBasarisi = 4 * (ozellikler[CEVIKLIK] / 100.0); // Kaçma şansı
                int kacis = rand() % 100;

                printf("Kaçma şansı: %d%%, Şans: %d%%\n", kacisBasarisi * 100, kacis);

                if (kacis < kacisBasarisi * 100) {
                    printf("Başarıyla kaçtınız!\n");
                } else {
                    printf("Kaçamadınız, savaş başlıyor...\n");

                    // Savaş başlıyor
                    int oyuncuGuc = ozellikler[GUC];
                    int oyuncuCeviklik = ozellikler[CEVIKLIK];
                    int oyuncuDayaniklilik = ozellikler[DAYANIKLILIK];

                    // Çevikliği büyük olan önce başlar
                    int oyuncuIlkSaldiri = 0;
                    if (oyuncuCeviklik > dusmanCeviklik) {
                        oyuncuIlkSaldiri = 1;
                    } else if (oyuncuCeviklik == dusmanCeviklik) {
                        if (rand() % 2 == 0) {
                            oyuncuIlkSaldiri = 1;
                        }
                    }

                    // Savaş
                    int oyuncuCan = ozellikler[CAN];
                    int dusmanCan = 100; // Başlangıçta haydutun canı 100

                    while (oyuncuCan > 0 && dusmanCan > 0) {
                        if (oyuncuIlkSaldiri) {
                            // Ozan saldırıyor
                            int oyuncuSaldiri = 4 * oyuncuGuc;
                            dusmanCan -= oyuncuSaldiri;
                            printf("Ozan saldırdı: %d hasar verdi\n", oyuncuSaldiri);

                            if (dusmanCan <= 0) {
                                break;
                            }

                            // Haydut savunuyor
                            int dusmanSavunma = 4 * dusmanDayaniklilik;
                            int alinanHasar = dusmanSavunma - (dusmanSavunma * (4 * oyuncuDayaniklilik / 100.0));
                            oyuncuCan -= alinanHasar;
                            printf("Haydut savundu, Ozan'a %d hasar verdi\n", alinanHasar);
                        } else {
                            // Haydut saldırıyor
                            int dusmanSaldiri = 4 * dusmanGuc;
                            oyuncuCan -= dusmanSaldiri;
                            printf("Haydut saldırdı: %d hasar verdi\n", dusmanSaldiri);

                            if (oyuncuCan <= 0) {
                                break;
                            }

                            // Ozan savunuyor
                            int oyuncuSavunma = 4 * oyuncuDayaniklilik;
                            int alinanHasar = oyuncuSavunma - (oyuncuSavunma * (4 * dusmanDayaniklilik / 100.0));
                            dusmanCan -= alinanHasar;
                            printf("Ozan savundu, Haydut'a %d hasar verdi\n", alinanHasar);
                        }

                        // Çevikliği büyük olan bir sonraki saldırıyı yapar
                        oyuncuIlkSaldiri = 1 - oyuncuIlkSaldiri;
                    }

                    if (oyuncuCan > 0) {
                        // Kazanıldı
                        printf("Kazandiniz!\n");
                        ozellikler[TECRUBE] += 50;
                        ozellikler[ALTIN] += (rand() % 11 + 40);  // 40-50 arasında rastgele altın
                        printf("Haydut ganimeti: %d altin kazandiniz!\n", ozellikler[ALTIN]);
                    } else {
                        printf("Kaybettiniz!\n");
                        ozellikler[CAN] -= 50;
                    }
                }
            }
            break;

        case 5:
            printf("Köy meydanına dönüyorsunuz...\n");
            break;

        default:
            printf("Geçersiz seçenek, tekrar deneyin.\n");
            break;
    }
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
                    printf("Gecersiz secim! Lütfen 1-5 arasinda bir secim yapin.\n");
                    continue; // Hatalı girişte döngüye devam et
            }
            puan--;  // Her geçerli seçim sonrası puan azaltılır
        }
    } else {
        printf("Seviye atlamak icin yeterli tecrubeniz yok!\n");
    }

    // Güncellenmiş beceri değerlerini göster
    printf("Guncel Durum -> Guc: %d, Ceviklik: %d, Dayaniklilik: %d, Karizma: %d, Toplayicilik: %d\n",
            ozellikler[GUC], ozellikler[CEVIKLIK], ozellikler[DAYANIKLILIK], ozellikler[KARIZMA], ozellikler[TOPLAYICILIK]);
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
void oyundanCik(){
    printf("Cikmak istediginizden emin misiniz?(1: Evet , 0 : Hayir)");
    int onay;
    scanf("%d",&onay);
    if(onay == 1){
        printf("Oyun kapatiliyor...\n");
        exit(0);
    }
    else{
        printf("Oyuna devam ediliyor...\n");
    }
    }
