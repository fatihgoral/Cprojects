#include <stdio.h>
#include <stdlib.h>
/* klavyeden girilen bir N pozitif tamsayisina kadar olan tek sayilarin ekrana listelenmesini
saglayan C programini recursive fonksiyon yard�m�yla yaziniz...
*/
void tekSayilar(int baslangic,int bitis)
{

//    Fonksiyon, ba�lang�� degerini 2 artirarak kendini cagirir ve
//    b�ylece bir sonraki tek sayiyi yazdirir..
    if(baslangic<=bitis){
    printf("%3d",baslangic);
   tekSayilar(baslangic+2,bitis);
}
}

int main()
{
    int n,duzeltme;
printf("luttfen bir sayi giriniz:");
scanf("%d",&n);

if(n==1){
    duzeltme=n;
}else{
duzeltme=n-1;
}
tekSayilar(1,duzeltme);

    return 0;
}
