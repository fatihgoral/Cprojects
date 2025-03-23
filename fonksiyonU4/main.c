#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen 2 tamsayinin faktoriyelini fon kyardimiyla bulan programi yaziniz
int faktHesapla(int x){
int sonuc=1;
for(int i=1;i<=x;i++){
    sonuc*=i;
}
return sonuc;

}

int main()
{
    int sayi;
    printf("faktoriyeli hesaplanacak sayiyi giriniz");
    scanf("%d",&sayi);
    faktHesapla(sayi);
    printf("faktoriyel islemi sonuxcu:%d",faktHesapla(sayi));

    return 0;
}
