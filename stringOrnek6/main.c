#include <stdio.h>
#include <stdlib.h>
// girilen string bir ifadeki harf sayisini
// sayilarin kac tane oldugunu bosluk sayisini bulunuz

/*Kodunuz, girilen tum karakterleri tek tek kontrol eder.
Her bir rakam karakteri ('0' ile '9' aras�) tespit edilir ve sayisayim degiskeni art�r�l�r.
"39" gibi bir say�y� ele al�rken, her bir karakter ('3' ve '9') ayr� ayr� kontrol edilir ve her biri i�in sayisayim art�r�l�r.
Bu nedenle, "39" girildiginde, her iki rakam ('3' ve '9') ayr� ayr� say�l�r ve sayisayim artar.*/


int main()
{
char yazi[200];
int i,harfSayisi=0,boslukSayisi=0,sayiSayisi=0;

printf("lutfen metni giriniz : ");
fgets(yazi,sizeof(yazi),stdin);

for(i=0;yazi[i]!='\0';i++){

    if((yazi[i]>='a' && yazi[i]<='z')||(yazi[i]>='A' && yazi[i]<='Z')) {
    harfSayisi++;
}
else if(yazi[i]==' '){
    boslukSayisi++;
}
else if(yazi[i]>='0'&& yazi[i]<='9'){
    sayiSayisi++;
}
}

printf("metindeki harf sayisi %d\n",harfSayisi);
printf("metindeki bosluk sayisi : %d\n",boslukSayisi);
printf("metindeki sayi sayisi : %d\n",sayiSayisi);




    return 0;
}
