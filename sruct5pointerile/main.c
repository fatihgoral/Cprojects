#include <stdio.h>

// Person yapısını tanımlıyoruz
struct Person {
    char name[50];
    int age;
};

int main() {
    // Bir Person yapısından bir değişken oluşturuyoruz
    struct Person person1;

    // Pointer ile person1'e erişmek için bir pointer tanımlıyoruz
    struct Person *ptr;

    // Pointer'ı person1'in adresine atıyoruz
    ptr = &person1;

    // Pointer aracılığıyla person1'in adı ve yaşını atıyoruz
    printf("Adinizi girin: ");
    scanf("%s", ptr->name);

    printf("Yasinizi girin: ");
    scanf("%d", &ptr->age);

    // Pointer kullanarak person1'in bilgilerini yazdırıyoruz
    printf("Ad: %s\n", ptr->name);
    printf("Yas: %d\n", ptr->age);

    return 0;
}
