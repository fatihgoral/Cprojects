#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("Bir sayi girin: ");
    scanf("%d", &number);
    number < 0 ? printf("Sayi negatiftir.\n"):(number > 0 ? printf("Sayi pozitiftir.\n") : printf("Sayi sifirdir\n"));
    return 0;
}
