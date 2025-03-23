#include <stdio.h>
#include <stdlib.h>

// i ve j degeri belli olan adýma i+j degerini atama algoritmaasi

int main()
{
    int matrix[3][4];
    int i,j;
    for(i=0;i<3;i++){
        for(j=1;j<4;j++){
            matrix[i][j]=i+j;
        }
    }
    for(i=0;i<3;i++){
        for(j=1;j<4;j++){
                printf("%d\t",matrix[i][j]);
        }
        printf("\n\n");
    return 0;
}
