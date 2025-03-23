#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen 2 tamsayinin toplamini farkini carpimini bolumunu bulan c preogramini yaziniz
int sonuc;
void calculus(int a,int b,char karakter){
    int sonuc;
if(karakter=='+'){
   sonuc=a+b;
printf("islem sonucu:%d",sonuc);
}
if(karakter=='-'){
   sonuc=a-b;
   printf("islem sonucu:%d",sonuc);
}
if(karakter=='*'){
   sonuc=a*b;
   printf("islem sonucu:%d",sonuc);
}
if(karakter=='/'){
        if(b==0){
           printf("payda sifir olamaz tanimsizlik olusur");
        }else{
   float sonuc=(float)a/b;// hem sonuc degerini hem de islem kýsmýný casting yapiyoruz

   printf("islem sonucu:%.2f",sonuc);
}
}
}

int main()
{
   int s1,s2;
   char islem;
  printf("lutfen 2 sayi giriniz: ");
  scanf("%d %d",&s1,&s2);
  printf("lutfen islem turu isaretini giriniz:");
  scanf(" %c",&islem);

 calculus(s1,s2,islem);

    return 0;
}
