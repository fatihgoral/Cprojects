#include <stdio.h>
#include <stdlib.h>
// kullanici tarfindan girilen bir cumlenin dinamik bellege yazilarak ve bellekten okunarak ekrana gosterilmesini
// saglyam C progremini yaziniz

int main()
{
char *metin;
 metin=(char*)calloc(100,sizeof(char));
 if(metin==NULL){
    printf("bellek tahsisi yapilamadi");
    return 1;
 }

 printf("lutfen bir cumle giriniz: ");
 gets(metin);
 printf("girdiginiz metin : %s",metin);
 free(metin);

    return 0;
}
