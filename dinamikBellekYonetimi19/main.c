#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
// klavyeden girilen bir cumlenin tersten okunusu dinamik bellek kullanarak elde
// etmeye yarayan C programini yaziniz
int i;
   char *metin;
   metin=(char*)malloc(50*sizeof(char));
   printf("lutfen bir cumle giriniz: ");
   gets(metin);
   for(i=strlen(metin)-1;i>=0;i--){
    printf("%c",*(metin+i));
   }
   free(metin);
    return 0;
}
