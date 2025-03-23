#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p;
    p=(int*)malloc(10*sizeof(int));
    // dinamik sekilde yer ayirip sonrasinda ilk degeri basmaya calisirsak ramdeki degeri basar

    printf("%d\n",p[0]);
    p[0]=4;// simdi ilk degeri verdik
    printf("%d\n",p[0]);
    free(p);

    // int *p=(int*)malloc(sizeof(10*sizeof(int)); ile int*p=(int*)malloc(40)




    return 0;
}
