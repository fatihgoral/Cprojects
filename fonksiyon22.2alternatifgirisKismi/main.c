#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    int count = 0;

    printf("Bir cumle girin ('.' ile bitirin): ");

    while (1) {
        ch = getchar();
        if (ch == '.') {
            break;
        }
        count++;
    }

    printf("Karakter sayisi: %d\n", count);

    return 0;
}

