#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct students {
    char myLetter;
    char* name;
    char* lastname;
    int no;
    float score;
    char parentName[40];
};

int main()
{
    struct students x = {'A', "murat", "boz", 182, 10, "behzat"};
    struct students x2;
    struct students x3;

    // Basit atama yaparak struct'u kopyalayýn
    x2 = x;// kopyalama islemi
    x3 = x;// kopyalama isleni
strcpy(x2.lastName,x.lastName);
    // `x2` ve `x3` için string kopyalama yaparak baðýmsýz hale getirin
    x2.name = strdup(x.name);
    x2.lastname = strdup(x.lastname);
    strcpy(x2.parentName, x.parentName);

    x3.name = strdup(x.name);
    x3.lastname = strdup(x.lastname);
    strcpy(x3.parentName, x.parentName);

    // Sonra x2 ve x3 için skorlarý güncelleyin
    x2.score = 91.23;
    x2.no=32;
    x3.score = 81.25;
    x3.no=34;
    // Deðiþkenlerin deðerlerini yazdýrma
    printf("x-myLetter: %c\n", x.myLetter);
    printf("x-name: %s\n", x.name);
    printf("x-lastname: %s\n", x.lastname);
    printf("x-no: %d\n", x.no);
    printf("x-score: %.2f\n", x.score);
    printf("x-parentName: %s\n", x.parentName);

    printf("\n\n");

    printf("x2 - myLetter: %c\n", x2.myLetter);
    printf("x2 - name: %s\n", x2.name);
    printf("x2 - lastname: %s\n", x2.lastname);
    printf("x2 - no: %d\n", x2.no);
    printf("x2 - score: %.2f\n", x2.score);
    printf("x2 - parentName: %s\n", x2.parentName);

    printf("\n\n");

    printf("x3 - myLetter: %c\n", x3.myLetter);
    printf("x3 - name: %s\n", x3.name);
    printf("x3 - lastname: %s\n", x3.lastname);
    printf("x3 - no: %d\n", x3.no);
    printf("x3 - score: %.2f\n", x3.score);
    printf("x3 - parentName: %s\n", x3.parentName);

    // Bellekte sýzdýrma olmamasý için strdup ile yapýlan kopyalamalarý free etmeyi unutmayýn
    free(x2.name);
    free(x2.lastname);
    free(x3.name);
    free(x3.lastname);

    return 0;
}

