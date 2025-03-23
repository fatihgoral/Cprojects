#include <stdio.h>
#include <stdlib.h>
// karakterleri ifade etmek icin asci kodlarini kullaniriz 0 ile 255 arasinda deger akirlar
// her karakterin bir ASCII kodu vardir.hafizada bu koda göre bir yer tutar
int main()
{
    printf("%d\t %d\t  %d\t\n",'a','b','c');
    int i;

    for(i='a';i<'z';i++){
        printf("%c\n",i);
    }
    return 0;
}
