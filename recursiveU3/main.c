#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen iki tamsayinin bolumunu bplme sembolu kullnmadan gerceklestiren
// c programini recursive fonk yardimiyla yaziniz
int bolum(int bolunen,int bolen){
 if(bolen==0){
    return 0;
 }
   else if(bolunen-bolen==0){
      return 1;
 }
        else if(bolunen<bolen){
         return 0;
 }

                 else{
    return (1+bolum(bolunen-bolen,bolen));
 }
}


int main()
{
    int a,b;
printf("bolunen sayiyi giriniz: ");
scanf("%d",&a);
printf("bolen sayiyi giriniz: ");
scanf("%d",&b);
printf("%d bolum %d=%d\n",a,b,bolum(a,b));
printf("kalan=%d",a-(bolum(a,b)*b));

    return 0;
}
