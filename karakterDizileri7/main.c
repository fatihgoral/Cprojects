#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // strcat iki tane string ifadeyi birle�tirir
    char bos[100];
    strcpy(bos, "benim");

    strcat(bos, " adim");
    strcat(bos, " can boz");

    // Birle�tirilen sonucu ekrana yazd�rma
    printf("%s\n", bos);

    return 0;
}
