#include <stdio.h>
#include <stdlib.h>
int hesapla(int t,int u){
int sonuc=1;
for(int i=1;i<=u;i++){
sonuc*=t;
}
return sonuc;
}

int main()
{
    int taban,us;
   printf("taban degeri ile us degerini giriniz ");
   scanf("%d %d",&taban,&us);
   printf("%d",hesapla(taban,us));


    return 0;
}
