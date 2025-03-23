#include <stdio.h>
#include <stdlib.h>
// alfabe harfleriyle baska formatta piramit deseni
/*
   A
   A B
   A B C
   A B C D
   A B C D E

*/
int main()
{
int i,j;
char letter;
char input;
printf("piramitin satir sayisini ve son harfini belirleyecek olan gharfi belirleyiniz");
for(i=1;i<input-'A'+1;i++){
        letter='A';
    for(j=1;j<=i;j++){
       printf("%c ",letter);
       letter++;
    }
    printf("\n");
}

    return 0;
}
