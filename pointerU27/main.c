#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pointer kullanarak iki sayýyý toplayýnýz

    int sayi1,sayi2,toplam;
    int *ptr1,*ptr2;

    //printf("%d\n%d",&sayi1,&sayi2);
    ptr1=&sayi1;
    ptr2=&sayi2;

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%d%d",ptr1,ptr2);

    toplam = *ptr1 + *ptr2;
    printf("Toplam : %d",toplam);



    return 0;
}

