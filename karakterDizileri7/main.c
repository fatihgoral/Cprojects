#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // strcat iki tane string ifadeyi birleştirir
    char bos[100];
    strcpy(bos, "benim");

    strcat(bos, " adim");
    strcat(bos, " can boz");

    // Birleştirilen sonucu ekrana yazdırma
    printf("%s\n", bos);

    return 0;
}
