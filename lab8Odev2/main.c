#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char kelime1[100];
    char kelime2[50];
    printf("lutfen 2 kelime giriniz\n");
    scanf("%s %s",kelime1,kelime2);// dizinin ismi onun baslangýc adresini temsil eder o yüzden & isaretine gerek yoktur
    int uzunluk1=strlen(kelime1);
    int uzunluk2=strlen(kelime2);
    printf("birinci kelimenin uzunlugu : %d ikinci kelimenin uzunlugu :%d\n",uzunluk1,uzunluk2);


   int sonuc = strcmp(kelime1,kelime2);
    if(sonuc==0){
        printf("kelimeler alfebetik olarak aynidir\n");
    }
    else if(sonuc>0){
        printf("2.kelime alfabetik olarak once gelir\n");
    }
    else {
        printf("1a.kelime alfabetik olarak once gelir\n");
    }
strcat(kelime1,kelime2);
    printf("birlestirilmis hali : %s\n",kelime1);

  strrev(kelime1);
  strrev(kelime2);
  printf("1.kelimenin ters cevrilmis hali:%s\n",kelime1);
  printf("2.kelimenin ters cevrilmis hali:%s\n",kelime2);

  strcpy(kelime1,kelime2);
  printf("en son kopyalanmýs hali:%s",kelime1);

    return 0;
}
