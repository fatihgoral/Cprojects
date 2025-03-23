#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // strcat iki tane string ifadeyi birleþtirir
    char bos[100];
    strcpy(bos, "benim");

    strcat(bos, " adim");
    strcat(bos, " can boz");

    // Birleþtirilen sonucu ekrana yazdýrma
    printf("%s\n", bos);

    return 0;
}
