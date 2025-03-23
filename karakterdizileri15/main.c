#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[200];
    char yeniMetin[200] = "";
    int i, j = 0;

    printf("lutfen islem yapacaginiz metni giriniz: ");
    fgets(metin, 200, stdin);

    for (i = 0; metin[i] != '\0'; i++) {
        if ((metin[i] >= 'a' && metin[i] <= 'z') || (metin[i] >= 'A' && metin[i] <= 'Z')) {
            yeniMetin[j++] = metin[i];
        }
    }
    //yeniMetin[j] = '\0'; // Yeni metni sonlandýr

    printf("harfler disindaki tum karakterler silindikten sonra: %s", yeniMetin);
    return 0;
}
