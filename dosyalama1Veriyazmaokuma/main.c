#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr=fopen("data.txt","w");
    fclose(fptr); // program kapatma yolu

    return 0;
}
