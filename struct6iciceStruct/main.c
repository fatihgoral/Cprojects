#include <stdio.h>
#include <stdlib.h>
struct Address{
char city[50];
char street[50];
int zipCode;
};

struct person{
char name[50];
int age;
struct Address address;
};

int main()
{
  struct person person1;

 printf("lutfen adi giriniz: ");
 scanf("%s",person1.name);

 printf("lutfen yasi giriniz: ");
 scanf("%d",&person1.age);

 printf("lutfen sehri giriniz: ");
 scanf("%s",&person1.address.city);

 printf("lutfen caddeyi giriniz: ");
 scanf("%s",person1.address.street);

 printf("lutfen posta kodunu girin: ");
 scanf("%d",&person1.address.zipCode);
 printf("\n\n");
// Alýnan bilgileri ekrana yazdýrýyoruz

    printf("Ad: %s\n", person1.name);
    printf("Yas: %d\n", person1.age);
    printf("Sehir: %s\n", person1.address.city);
    printf("Cadde: %s\n", person1.address.street);
    printf("Posta Kodu: %d\n", person1.address.zipCode);


    return 0;
}
