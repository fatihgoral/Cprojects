#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,*ptr1;
    int n;
    n=5;
    int i;
    printf("girdiginiz sayi deger, :%d\n",n);

    ptr=(int *)malloc(5*sizeof(int));
    ptr=(int *)calloc(5,sizeof(int));

    if(ptr==NULL ||ptr1==NULL){
        printf("maalesef bellek ayirma islemi basarisiz oldu\n\n");
        exit(0);
    }
    else{
        printf("malloc kullanarak bellek ayirma islemi yaptim\n");
        free(ptr);
        printf("malloc icin ayrýlan yeri serbest biraktim\n");

      printf("calloc kullanarak basarili bir sekilde ayirma islemi yaptim\n");
      free(ptr1);
      printf("calloc icin ayrilan serbest birakildi\n");

    }
    return 0;
}
