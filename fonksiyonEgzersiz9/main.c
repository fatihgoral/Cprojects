#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen iki tamsayidan buyuk olanýný fonksiyon kullanarak bulan c programini yaziniz
kiyas(int n1,int n2){
 if(n1>n2)
    return 1;
 else if(n1==n2)
    return 2;
 else
    return 3;
}

int main()
{
    int sayi1,sayi2;
    int sonuc;

    printf("lutfen kiyaslamak istediginiz sayilari sirasiyla giriniz: ");
    scanf("%d %d",&sayi1,&sayi2);
    sonuc=kiyas(sayi1,sayi2);

    if(sonuc==1)
    printf("%d sayisi %d sayisindan buyuktur\n",sayi1,sayi2);
    if(sonuc==2)
    printf("%d sayisi %d sayisina esittir\n",sayi1,sayi2);
    else
        printf("%d sayisi %d sayisindan kucuktur\n",sayi1,sayi2);



    return 0;
}
