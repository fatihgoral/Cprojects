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

 /* bir ögretmen 30 kisilik sinifa 10 soruluk coktan secmeli sorulardan olsan bir sýnav vermiþtir
 bu sýnava her sorunun 4 þýkký (A B C D) bulunmakta ve 4 yanlýs bir dogruyu götürmektedir
bir ögrencinin okul numarasini ve cevaplarini bu yapý dizisine okutunuz
daha sonra ögretmenin hazirladigi cevap anahtarini bir karakter dizisine okuyunuz ve her ögrencinin
 10 üzerinden aldýgý notu hesaplayiniz..Her ögrencinin okul numarasi ile hesaplanan sýnav sonucunu bir
 baska yapi dizisinde tuttunuz ve sonuclari ekranda görünteleyiniz
*/
struct ogrenciTipi ogrenci[3];
struct sonucTipi sonuc[3];
char anahtar[10];
//char satir;
int i,j;
int dogru,yanlis;
printf("lutfen cevap anahtarini giriniz\n");
for(i=0;i<10;i++){
    scanf(" %c",&anahtar[i]);// Bosluk (" ") karakteri, önceki scanf'in \n karakterini atlamak için kullandim.
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
