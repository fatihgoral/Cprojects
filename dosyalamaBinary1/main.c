#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int dizi[5]={1,2,3,4,5};
    fptr=fopen("dizi.bin","wb");
    if (fptr == NULL) {
        printf("Dosya a��lamad�.\n");
        return 1;
    }
    fwrite(dizi,sizeof(int),5,fptr);
    fclose(fptr);
    printf("Dizi dosyaya yaz�ld�.\n");

    return 0;
}
