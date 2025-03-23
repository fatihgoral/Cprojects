#include <stdio.h>

int main() {
int i,j,k;
int sayi;

printf("lutfen bir sayi giriniz");
scanf("%d",&sayi);

    for(i=1;i<sayi;i++){
        for(j=1;j<=sayi-i;j++){
            printf("  ");
        }

       for(k=1;k<=(2*i-1);k++) {
        printf("%d ",k);
       }
      printf("\n");
   }


    return 0;
}




