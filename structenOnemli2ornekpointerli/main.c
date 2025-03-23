#include <stdio.h>
#include <stdlib.h>
struct sehirler
{
    char ad[20];
    int nufus;

};


int main()
{

    struct sehirler s[5]={
    {"izmir",24000},
    {"istanbul",25000},
    {"ankara",26000},
    {"bursa",27000},
    {"antalya",28000},
    };

    /*Bu üstteki ifadeyi yazmanýnin  farkli bir yolu
    struct sehirler s[5];

strcpy(s[0].isim, "izmir");
s[0].nufus = 24000;

strcpy(s[1].isim, "istanbul");
s[1].nufus = 25000;

strcpy(s[2].isim, "ankara");
s[2].nufus = 26000;

strcpy(s[3].isim, "bursa");
s[3].nufus = 27000;

strcpy(s[4].isim, "antalya");
s[4].nufus = 28000;
*/
/*

struct sehirler s[5];

s[0] = (struct sehirler){"izmir", 24000};
s[1] = (struct sehirler){"istanbul", 25000};
s[2] = (struct sehirler){"ankara", 26000};
s[3] = (struct sehirler){"bursa", 27000};
s[4] = (struct sehirler){"antalya", 28000};

*/

    for(int i=0;i<5;i++){
        printf("%s - %d \n",s[i].ad,s[i].nufus);
    }
    struct sehirler *sptr=&s;
   printf("\npointer sonrasi:\n\n");

   for(int i=0;i<5;i++ ){
    printf("%s - %d\n",sptr->ad,sptr->nufus);
    sptr++;
   }
//sptr++ Veri Gecisini Saglar: sptr isaretcisi, dizi elemanlari arasinda gecis yapmak icin kullanilir.
//Her iterasyonda sptr++ ifadesiyle, bir sonraki eleman olan sehre geciyoruz.
    return 0;
}
