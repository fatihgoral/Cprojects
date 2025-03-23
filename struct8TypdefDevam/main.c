#include <stdio.h>

typedef struct {
    char name[50];  // Statik dizi, 50 karakter uzunluðunda
    int age;
    float weight;
}student;

int main() {
    // Yapilari tanimla ve baslat
    // sürekli struct yazmamiza gerek kalmaz
   student s1 = {"fatih", 15, 60.1};
  student s2 = {"kadir", 14, 60.6};

    // Bilgileri ekrana yazdýr
    printf("Student 1:\n");
    printf("Ad: %s\n", s1.name);
    printf("Yas: %d\n", s1.age);
    printf("Kilo: %.1f\n", s1.weight);

    printf("\nStudent 2:\n");
    printf("Ad: %s\n", s2.name);
    printf("Yas: %d\n", s2.age);
    printf("Kilo: %.1f\n", s2.weight);

    return 0;
}
