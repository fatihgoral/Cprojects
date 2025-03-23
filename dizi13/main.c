#include <stdio.h>
#include <stdlib.h>
// bu kodu incele hata veriyor
// algorritmayı anla
void karakterSayisi(char x[]);

int main()
{
    char x[100];
    int i = 0;
    printf("enter a sentence: ");
    do {
        scanf(" %c", &x[i]); // Önceki girdileri temizlemek için baþýndaki boþluk
        i++;
    } while (x[i-1] != '.');

    karakterSayisi(x);

    return 0;
}

void karakterSayisi(char x[])
{
    int i;
    int aCount = 0, eCount = 0;
    for (i = 0; x[i] != '.'; i++) {
        if (x[i] == 'A' || x[i] == 'a') {
            aCount++;
        }
        if (x[i] == 'E' || x[i] == 'e') {
            eCount++;
        }
    }
    // Son karakterin '.' olduðunu kontrol edip çýktý olarak yazdýrýyoruz
    if (x[i] == '.') {
        if (x[i] == 'A' || x[i] == 'a') {
            aCount++;
        }
        if (x[i] == 'E' || x[i] == 'e') {
            eCount++;
        }
    }

    printf("A/a: %d\n", aCount);
    printf("E/e: %d\n", eCount);
}
