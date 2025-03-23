#include <stdio.h>
#include <stdlib.h>
//pointer kullanarak 2 sayi. toolamak ve ekrana yazdýrmak
void topla(int *sayi1,int *sayi2){
int result=*sayi1+*sayi2;
printf("toplam sonucu : %d",result);
}

int main()
{
    int a=10;
    int b=23;
   topla(&a,&b);
    return 0;
}
