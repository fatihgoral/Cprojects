#include <stdio.h>
#include <string.h>

int main()
{
   char kullaniciAdi[]="gs",sifre[]="fb",k_adi[10],sfr[10];
printf("lutfen kullanici adi giriniz\n");
scanf("%s",&k_adi);
printf("lutfen sifre giriniz\n");
scanf("%s",&sfr);
if(strcmp(kullaniciAdi,k_adi)==0 && strcmp(sifre,sfr)==0)
{
    printf("%s ile % girisi basarili\n",k_adi,sfr);
}else{
printf("kullanici adi ya da sifre yanlis\n");
}
    return 0;
}
