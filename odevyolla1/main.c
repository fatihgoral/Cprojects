#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dizi[10];
    int *diziPtr = dizi;
    int diziCift[10], diziTek[10];
    int *ciftPtr = diziCift;
    int *tekPtr = diziTek;

    int i, ciftIndex = 0, tekIndex = 0;

    srand(time(NULL));


    for (i = 0; i < 10; i++) {
        *(diziPtr + i) = rand() % 100;  // 0-99 aras� rastgele say�
        printf("dizi[%d] = %d\n", i, *(diziPtr + i));

        if (*(diziPtr + i) % 2 == 0) {  // �ift say� kontrol�
            *(ciftPtr + ciftIndex) = *(diziPtr + i);
            ciftIndex++;
        } else {
            *(tekPtr + tekIndex) = *(diziPtr + i);
            tekIndex++;
        }
    }


    printf("\nCift sayilar: ");
    for (i = 0; i < ciftIndex; i++) {
        printf("%d ", *(ciftPtr + i));
    }


    printf("\nTek sayilar: ");
    for (i = 0; i < tekIndex; i++) {
        printf("%d ", *(tekPtr + i));
    }

    return 0;
}
