#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen bir cumlenin tersten okunuþunu dinamik bellek kullanarak cozun
int main()
{
    char*metin;
    int i;
    metin=(char*)malloc(50*sizeof(char));

    printf("lutfen bir cumle giriniz");
    gets(metin);

    for( i=strlen(metin)-1;i>=0;i--){
        printf("%c",*(metin+i));
    }

    return 0;
}
