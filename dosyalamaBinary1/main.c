#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int dizi[5]={1,2,3,4,5};
    fptr=fopen("dizi.bin","wb");
    if (fptr == NULL) {
        printf("Dosya açýlamadý.\n");
        return 1;
    }
    fwrite(dizi,sizeof(int),5,fptr);
    fclose(fptr);
    printf("Dizi dosyaya yazýldý.\n");

    return 0;
}
