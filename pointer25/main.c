#include <stdio.h>
#include <stdlib.h>
#define MAX 11
int main()
{
    //galatasaray elamanlarini iceren bir karakkter dizsi tanimlayin
   // 2 pointer ve bir for dongusu kullanarak bu dizinin aynisi kopyalayin ve ekrana bastirin
   char dizi[MAX]={'g', 'a', 'l', 'a', 't', 'a', 's', 'a', 'r', 'a', 'y'};
 char* sayi1;
 char* sayi2;
 char dizi_kopya[MAX];
int i;

sayi2=dizi_kopya;

for(sayi1=dizi;sayi1<dizi+MAX;sayi1++,sayi2++){
    *sayi2=*sayi1;
}
printf("original tablo: ");
for(i=0;i<MAX;i++){
    printf("%c",dizi+i);
}
printf("kopya tablo : ");
for(i=0;i<MAX;i++){
    printf("%c",*(dizi_kopya+i));
}

    return 0;
}
