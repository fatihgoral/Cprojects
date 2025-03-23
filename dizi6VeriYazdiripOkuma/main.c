#include <stdio.h>
#include <stdlib.h>

int main()
{

    double myValue,myArray[10];
    int choice,index;
    do {
    printf("make a choice (-1 to exit)\n");
    printf("\t1. write to array\n ");
    printf("\t2.read from array\n");
    scanf("%d", &choice); // Kullanicinin seçimi alýnýyor.

    if (choice == -1) break; // Kullaanici -1 girerse döngüden çikiliyor

    if (choice != 1 && choice != 2) { // Gecersiz bir seçim yapiliyorsa, hata mesaji verilir.
        printf("are you kidding me ?\n");
        continue; // Döngünün bu iterasyonu sonlandiriliyor ve baþa dönülür.
    }

    printf("enter array index : ");
    scanf("%d", &index); // Kullanicidan dizi indeks degeri istenir.

    if (index < 0 || index > 9) { // Geçersiz bir indeks girilirse, hata mesaji verilir.
        printf("index should be in the range 0-9\n");
        continue; // Döngünün bu iterasyonu sonlandýrýlýr ve baþa dönülür.
    }

    switch (choice) {
        case 1: // Kullanici 1'i secerse (yazma islemi)
            printf("\nenter a value :");
            scanf("%lf", &myValue); // Yazilacak deger kullanicidan aliniyor.
            myArray[index] = myValue; // Deðer belirtilen indekse yaziliyor
            printf("the write operation is successful\n\n");
            break;
        case 2: // Kullanici 2'yi secerse (okuma islemi)
            printf("Array[%d]: %.2f\n\n", index, myArray[index]); // Belirtilen indeksteki deger ekrana yazdiriliyor
            break;
    }
} while (choice != -1); // Kullanici -1 girene kadar döngü devam eder.
return 0;
}
