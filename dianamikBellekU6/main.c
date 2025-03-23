#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N;
    printf("Lutfen N adet sayi giriniz: ");
    scanf("%d", &N);
    int i;


    int *dizi = (int*)malloc(N * sizeof(int));


    if (dizi == NULL) {
        printf("Bellek tahsisi basarisiz!\n");
        return 1;
    }

    srand(time(0));
    printf("Uretilen sayilar: ");
    for (i = 0; i < N; i++) {
        *(dizi + i) = rand() % 100;
        printf("%d  ", *(dizi + i));
    }

    printf("\n");


    for (i = 0; i < N; i++) {
        (*(dizi + i)) = (*(dizi + i)) * (*(dizi + i));
        // *(dizi+i)=pow(*(dizi+i),2);

    }


    printf("Kareler: \n");
    for (i = 0; i < N; i++) {
        printf("%d\n", (*(dizi + i)));
    }

    free(dizi);

    return 0;
}
