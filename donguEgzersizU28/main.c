#include <stdio.h>
#include <stdlib.h>
// alfabe harfleriyle yarim piramit yapmak

int main()
{
int i,j;
char start='A',input;

printf("lutfen piramiti sonlandirmak istediginiz karakteri giriniz:");
scanf("%c",&input);
printf("\n");

for(i=1;i<=(input-'A'+1);i++){
    for(j=1;j<=i;j++){
        printf("%c",start);
    }
    start++;
    printf("\n");
}

    return 0;
}
