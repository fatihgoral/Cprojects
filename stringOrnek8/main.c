/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// klavyeden girilen bir cumledeki kelime sayisini bulan c programini yaziniz
// hem while hem for dongusunu kullanarak yapiniz

int main()
{
    char cumle[100];
    int i=0,sayac=0;

    printf("lutfen bir cumle giriniz:\n");
    fgets(cumle,100,stdin);

    while(cumle[i]!='\0'){
        if(cumle[i] ==' '){
            sayac++;
        }
       i++;
    }
    printf("cumledeki kelime sayisi :%d",sayac);

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// klavyeden girilen bir cumledeki kelime sayisini bulan c programini yaziniz
// hem while hem for dongusunu kullanarak yapiniz

int main()
{
    char cumle[100];
    int i;
    int sayac=0;

    printf("lutfen bir cumle giriniz:\n");
    fgets(cumle,100,stdin);

    for(i=0;cumle[i]!='\0';i++){
        if(cumle[i]==' '){
            sayac++;
        }
    }
     printf("Cümledeki kelime sayýsý: %d\n", sayac);

    return 0;
