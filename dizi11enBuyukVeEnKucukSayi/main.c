#include <stdio.h>
#include <stdlib.h>
/*
bir sinif en fazla 100 ogrenciden olusabilir
sinifta bulunan ogrenci sayisini girdi olarak alýp her ogrencinin okul
numarasi ile notunu iki ayri array okutalým
sonuc olarak en dusukve en yuksek notu alan ogrenciler ekrana yazdirilsin

*/
int main()
{

int i,sayi,smallValue=100,BigValue=0,bigIndex,smallIndex;
int no[100],notes[100];
printf("lutfen kisi sayisini giriniz : ");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++){
    printf("ogrenci no ve Not : ");
    scanf("%d%d",&no[i],&notes[i]);
}
for(i=1;i<=sayi;i++){
       if( notes[i]<smallValue){
        smallValue=notes[i];
        smallIndex=i;
       }
}
for(int i=1;i<=sayi;i++){
    if(notes[i]>BigValue){
        BigValue=notes[i];
    bigIndex=i;
}
}
printf("%d numarali ogrenci %d notu ile en yuksek notu almistir\n",no[bigIndex],BigValue );
printf("%d numarali ogrenci %d notu ile en dusuk notu almistir\n",no[smallIndex],smallValue );


    return 0;
}
