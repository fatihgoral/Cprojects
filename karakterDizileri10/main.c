#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // strrey
    char can[100];
    printf("lutfen bir text degerini giriniz: ");
    fgets(can, sizeof(can), stdin);  // fgets kullan�larak tam bir sat�r al�n�r

    // fgets sonunda newline karakteri olabilir, bunu silmek i�in:
    can[strcspn(can, "\n")] = 0;  // newline karakterini siler

    printf("girdiginiz ifade: %s\n", can);
    printf("girdiginiz ifadenin tersi: %s\n", strrev(can));
    return 0;
}
