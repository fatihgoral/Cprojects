#include <stdio.h>
#include <stdlib.h>
#define tavhiz 0.038
#define kushiz 0.012
/*
bir ciftlikte tavþanlarin sayisi 1042 iken,kuþlarin sayisi 2272 dir
bir sayiya tavþanlar %3.8 oraninda cogalirken; kuslar %1.2 oraninda cogalmaktadir
tavsanlarin kuslarin sayisini kac yýl sonra geçecegini bulan bir c programi yaziniz
*/

int main()
{
float tavsan=1042;
float kus=2272;
int yil=0;
while(tavsan<kus){
    tavsan+= tavsan*tavhiz;
    kus+=kus*kushiz;
    yil++;
    printf("%d. yil tavsan sayisi: %d tavsan sayisi %d dir\n",yil,(int)tavsan,(int)kus);
}
printf("tavsanlar kuslari %d yil sonra gecer",yil);


    return 0;
}
