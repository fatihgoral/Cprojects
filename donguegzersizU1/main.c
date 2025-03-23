#include <stdio.h>
#include <stdlib.h>
// kullanicidan bir deger alip 10 a kadar olan carpimlarini ekrana bastirin(carpim tablosu olusturun)
int main()
{
    int i,sayi;
    printf("lutfen bir deger giriniz");
    scanf("%d",&sayi);

    for(i=0;i<=10;i++){
   printf("%d*%d=%d\n",sayi,i,sayi*i);
    }

return 0;
}
