#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct ogrenciTipi{
   int no;
   char cevap[10];
   };

   struct sonucTipi{
   int no;
   char not;
   };

 /* bir �gretmen 30 kisilik sinifa 10 soruluk coktan secmeli sorulardan olsan bir s�nav vermi�tir
 bu s�nava her sorunun 4 ��kk� (A B C D) bulunmakta ve 4 yanl�s bir dogruyu g�t�rmektedir
bir �grencinin okul numarasini ve cevaplarini bu yap� dizisine okutunuz
daha sonra �gretmenin hazirladigi cevap anahtarini bir karakter dizisine okuyunuz ve her �grencinin
 10 �zerinden ald�g� notu hesaplayiniz..Her �grencinin okul numarasi ile hesaplanan s�nav sonucunu bir
 baska yapi dizisinde tuttunuz ve sonuclari ekranda g�r�nteleyiniz
*/
struct ogrenciTipi ogrenci[3];
struct sonucTipi sonuc[3];
char anahtar[10];
//char satir;
int i,j;
int dogru,yanlis;
printf("lutfen cevap anahtarini giriniz\n");
for(i=0;i<10;i++){
    scanf(" %c",&anahtar[i]);// Bosluk (" ") karakteri, �nceki scanf'in \n karakterini atlamak i�in kullandim.
}
printf("lutfen ogrenci bilgilerini giriniz\n");

for(j=0;j<3;j++){
        printf("ogrenci no:\n");
    scanf("%d",&ogrenci[j].no);
dogru=yanlis=0;
//scanf("%c",&satir);
  printf("cevaplar :\n") ;
for(i=0;i<10;i++){
    scanf(" %c",&ogrenci[j].cevap[i]);
    if(anahtar[i]==ogrenci[j].cevap[i]){
        dogru++;
    }else if(ogrenci[j].cevap[i]!= ' '){
    yanlis++;
    }
}
sonuc[j].no=ogrenci[j].no;
printf("dogru: %d  yanlis: %d\n",dogru,yanlis);
sonuc[j].not=dogru-(yanlis/4);
}
for(j=0;j<3;j++){
    printf("ogrenci no: %d  not: %d\n",sonuc[j].no,sonuc[j].not);
}

    return 0;
}
