#include <stdio.h>
#include <stdlib.h>
    /*
 klavyeden girilen bir cumlenin tersten okýnusunu elde edilmesini saglayan
    recursive fonksiyon yardimiyla yziniz
    */

void ters(char *metin,int boy){

if(boy==0){
    printf("%c",metin[boy]);
}else{
printf("%c",metin[boy]);
ters(metin,boy-1);
}
}

int main()
{

    char kelime[100];
    printf("lutfen tersi yazilacak kelimeyi girin: ");
   gets(kelime);
    ters(kelime,strlen(kelime)-1);
    return 0;
}
