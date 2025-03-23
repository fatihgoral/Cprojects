#include <stdio.h>
#include <stdlib.h>
struct students{
    char myLetter;
    char* name;
    char* lastname;
    int no;
    float score;
char parentName[40];
};


int main()
{
struct students x;
struct students x2={'A',"murat","boz",182,10,"behzat"};
x.myLetter='b';
x.name="soner";
x.lastname="sarikabadayi";
x.no=190;
x.score=1;


    strcpy(x.parentName, "polat");

    // Değişkenlerin değerlerini yazdırma
    printf("x-myLetter: %c\n", x.myLetter);           // Tek karakter
    printf("x-name: %s\n", x.name);                   // C string
    printf("x-lastname: %s\n", x.lastname);           // C string
    printf("x-no: %d\n", x.no);                       // Tam sayı
    printf("x-score: %.2f\n", x.score);               // Float sayı
    printf("x-parentName: %s\n", x.parentName);       // C string
 printf("\n\n");
    // Struct x2'nin değerlerini de yazdırmak için
    printf("x2 - myLetter: %c\n", x2.myLetter);
    printf("x2 - name: %s\n", x2.name);
    printf("x2 - lastname: %s\n", x2.lastname);
    printf("x2 - no: %d\n", x2.no);
    printf("x2 - score: %.2f\n", x2.score);
    printf("x2 - parentName: %s\n", x2.parentName);

    return 0;
}

