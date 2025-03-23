#include <stdio.h>
#include <stdlib.h>

// 5 degerini atlayarak 1 den 10 kadar sayilari dongu ile yazma
int main()
{
int k = 1;
    do{
        if(k == 5){
            k++;
            continue;
        }
        printf("%d ", k);
        k++;
    } while(k <= 10);

printf("\n**********************************\n");

    int l = 1;
    while(l <=10){
        if(l == 5){
            l++;
            continue;
        }
        printf("%d ", l);
        l++; // l deðiþkeni burada arttýrýlmalý
    }

    return 0;
}
