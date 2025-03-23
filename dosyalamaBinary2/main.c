#include <stdio.h>

int main()
{
    FILE *dosya;
    int dizi[5]; // Okunacak dizi

    // Dosyay� binary okuma modunda a�
    dosya = fopen("dizi.bin", "rb");
    if (dosya == NULL)
    {
        printf("Dosya a��lamad�.\n");
        return 1;
    }

   fread(dizi,sizeof(int),5,dosya);
    fclose(dosya);

    // Okunan diziyi ekrana yazd�r
    printf("Dosyadan okunan dizi: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}
