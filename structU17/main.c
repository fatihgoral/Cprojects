#include <stdio.h>
#include <stdlib.h>
/*
adres defteri adinda bir yapi tanimlayiniz. tutulacak bilgiler ad,soyad,tel,adres,posta kodu seklindedir
buna göre N adet kisinin bilgisini bir yapiya tutan C program yaziniz
*/

struct adresdefteri{
char ad[30];
char soyad[30];
char tel[20];
char adres[100];
char postakodu[6];
};

int main()
{
    int N;
    int i;
    printf(" kisi sayisini giriniz");
    scanf("%d",&N);
    getchar();
  struct adresdefteri kisiler[N];

  for(i=0;i<N;i++){
     printf("lutfen adinizi giriniz:\n");
     gets(kisiler[i].ad);
     printf("lutfen soyadinizi giriniz: \n");
     gets(kisiler[i].soyad);
     printf("lutfen tel no gir:\n");
     gets(kisiler[i].tel);
     printf("lutfen adres giriniz:\n");
     gets(kisiler[i].adres);
     printf("lutfen posta kodunu giriniz:\n");
     gets(kisiler[i].postakodu);
  }
  printf("ADI SOYADI TELEFON NUMARASI ADRESÝ POSTA KODU\n");
    for(i=0;i<N;i++){
        printf("%s\t %s\t %s\t %s\t %s\n",kisiler[i].ad,kisiler[i].soyad,kisiler[i].tel,kisiler[i].adres,kisiler[i].postakodu);
    }

    return 0;
}
