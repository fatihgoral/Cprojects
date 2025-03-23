#include <stdio.h>
#include <stdlib.h>

int main()
{
 /*char isim[]="fatih";
  int uzunluk=strlen(isim);
  printf("%s isminin karakter sayisi :%d\n",isim,uzunluk);
  printf("%d\n",strlen(isim));
  printf("%d\n",strlen("ali"));
*/
  /*char isim[]="istanbul";
  for(int i=0;i<strlen(isim);i++){
      printf("%c\n",isim[i]);
  }
*/
/*
char film[]="bir zamanlar anadoluda";

int len=strlen(film);
for(int i=len-1;i>=0;i--){ //Null karakter atlanirsa, ekranda dizinin ters cevrilmis hali duzgun bir sekilde gozukur. Atlanmazsa, null karakter gorunmez
                        //ancak yazdirma islemi beklenmedik bir sekilde sona erer.
printf("%c",film[i]);
}

}
*/
char k_adi[20];
//Bu kod, kullanici dogru uzunlukta bir kullanici adi girene kadar donguye devam eder

while(1){
printf("lutfen kullanici adini giriniz : ");
scanf("%s",&k_adi);
if(strlen(k_adi)<8){
    printf("en az 8 karakter olmali tekrar giris yapiniz\n");

}else{

printf("dogru giris yaptiniz %s",k_adi);
break;// donguden cikmak icin
}
}
 return 0;
 }
