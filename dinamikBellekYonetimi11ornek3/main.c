#include <stdio.h>
#include <stdlib.h>
/*
kullanýcý tarafýndan girilen iki adet tamsayý icin farklý bellek bolgelerinde yer almaktadýr
buna gore iki bellek bolgesinde yer alan sayýlarýn yerlerini degiþtirilmesini saglayan C programini yaziniz
*/
void degistir(int *x1,int *x2){
int temp=*x1;
*x1=*x2;
*x2=temp;
printf("islem sonrasi degistirilmis versiyon : %d  %d\n\n",*x1,*x2);
}

int main()
{
    int *p1,*p2;

    p1=(int *)malloc(sizeof(int));
    p2=(int *)malloc(sizeof(int));
// pointer zaten adres belirttigi icin * isaretine ve & issaretine gerek yok
    printf("lutfen 1. sayiyi giriniz: ");
    scanf("%d",p1);
    printf("lutfen 2. sayiyi giriniz: ");
    scanf("%d",p2);
    printf("girilen sayilar : %d %d\n",*p1,*p2);
    printf("\n");
    degistir(p1,p2);

//free kullanilmazsa, dinamik olarak ayrilan bellek serbest birakilmadigi icin bellek sizintisi olusur.
//Bu, programin bellegi gereksiz yere tuketmesine ve zamanla sistemin performansini dusurmesine yol acar.
//Ozellikle uzun sure calisan programlarda bu durum bellegin tuketilmesine ve programin cokmesine neden olabilir.
//Bellek sizintilarini onlemek icin her dinamik bellek ayirma isleminden sonra free kullanmak onemlidir.

 free(p1);
 free(p2);
    return 0;
}
