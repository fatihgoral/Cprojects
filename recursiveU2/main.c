#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen iki tamsayinin carpimini carpim sembolu kullnmadan gerceklestiren
// c programini recursive fonk yardimiyla yaziniz
int carpim(int sayi1,int sayi2){
int sonuc;
if(sayi2==1){
sonuc=sayi1;
}
    else{
        sonuc=sayi1+carpim(sayi1,sayi2-1);
    }
 return sonuc;
}


int main()
{
    int a,b;
printf("lutfen 2 adet sayi girin:");
scanf("%d %d",&a,&b);
printf("%d carpi %d=%d",a,b,carpim(a,b));


    return 0;
}
