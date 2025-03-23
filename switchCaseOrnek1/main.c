#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float sayi1,sayi2;
    float sonuc;

    printf("lutfen operotor giriniz");
    scanf("%c",&op);
    printf("lutfen sayilari giriniz");
    scanf("%f%f", &sayi1,&sayi2);
    switch(op){
    case '+':
        sonuc=sayi1+sayi2;
  printf("%f +%f= %f",sayi1,sayi2,sonuc);
  break;
    case '-' :
        sonuc=sayi1-sayi2;
  printf("%f - %f= %f",sayi1,sayi2,sonuc);
     break;
     case '*' :
        sonuc=sayi1*sayi2;
  printf("%f *%f= %f",sayi1,sayi2,sonuc);
     break;
     case '/' :
         if (sayi2!=0){

        sonuc=sayi1/sayi2;
  printf("%f /%f= %f",sayi1,sayi2,sonuc);
         }else{
             printf("sifir girdiniz bu yuzden islem tanimsiz..");

         }
     break;


     default:
       printf("hatali giris yaptiniz");

    }

    return 0;
}
