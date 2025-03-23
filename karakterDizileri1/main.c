#include <stdio.h>
#include <stdlib.h>

int main()
{
char can[]={'f','a','t','i','h','\0'};
char dizim[]="muslera";
printf("%s\n",dizim);
printf("%s\n",can);
char kullanici[100];// miktar belirtilmeli maxiumum cinsinden yaz
printf("lutfen bir karakter dizisi giriniz\n");
scanf("%s",&kullanici);
printf("%s\n",kullanici);
char array[]="merhaba dunya";
array[0]='t';
array[8]='h';
printf("%s",array);
    return 0;
}
