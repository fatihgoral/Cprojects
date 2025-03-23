#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Kullaným: %s isim soyisim ekSoyisim\n", argv[0]);
        return 1;
    }

    printf("Benim ismim %s %s %s'dir.\n", argv[1], argv[2], argv[3]);

    return 0;
}
