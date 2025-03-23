#include <stdio.h>

int main()
{
    FILE *dosya;
    int dizi[5]; // Okunacak dizi

    // Dosyayý binary okuma modunda aç
    dosya = fopen("dizi.bin", "rb");
    if (dosya == NULL)
    {
        printf("Dosya açýlamadý.\n");
        return 1;
    }

   fread(dizi,sizeof(int),5,dosya);
    fclose(dosya);

    // Okunan diziyi ekrana yazdýr
    printf("Dosyadan okunan dizi: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}
