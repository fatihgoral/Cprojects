#include <stdio.h>

// Person yap�s�n� tan�ml�yoruz
struct Person {
    char name[50];
    int age;
};

int main() {
    // Bir Person yap�s�ndan bir de�i�ken olu�turuyoruz
    struct Person person1;

    // Pointer ile person1'e eri�mek i�in bir pointer tan�ml�yoruz
    struct Person *ptr;

    // Pointer'� person1'in adresine at�yoruz
    ptr = &person1;

    // Pointer arac�l���yla person1'in ad� ve ya��n� at�yoruz
    printf("Adinizi girin: ");
    scanf("%s", ptr->name);

    printf("Yasinizi girin: ");
    scanf("%d", &ptr->age);

    // Pointer kullanarak person1'in bilgilerini yazd�r�yoruz
    printf("Ad: %s\n", ptr->name);
    printf("Yas: %d\n", ptr->age);

    return 0;
}
