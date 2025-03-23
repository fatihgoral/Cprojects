#include <stdio.h>
#include <string.h>

int main() {
    // 1. String tan�mlama ve ba�latma
    char str1[20] = "Merhaba";
    char str2[20];

    // 2. Kullan�c�dan string alma
    printf("Bir string girin: ");
    fgets(str2, sizeof(str2), stdin);  // fgets kullan�m�, buffer ta�malar�n� �nlemek i�in g�venlidir.

    // 3. Stringin uzunlu�unu bulma
    int length1 = strlen(str1);  // str1'in uzunlu�u
    int length2 = strlen(str2) - 1;  // fgets sonuna \n ekler, bu y�zden ��kard�k.

    printf("Str1 uzunlu�u: %d\n", length1);
    printf("Str2 uzunlu�u: %d (yeni sat�r karakteri hari�)\n", length2);

    // 4. String birle�tirme (concatenation)
    strcat(str1, " D�nya!");  // str1'e " D�nya!" ekler.
    printf("Birle�tirilmi� string: %s\n", str1);

    // 5. String kopyalama
    strcpy(str2, str1);  // str2'ye str1'i kopyalar
    printf("Str2'nin yeni de�eri: %s\n", str2);

    // 6. String kar��la�t�rma
    if (strcmp(str1, str2) == 0) {
        printf("Str1 ve Str2 e�it.\n");
    } else {
        printf("Str1 ve Str2 e�it de�il.\n");
    }

    // 7. String ters �evirme
    char str3[20];
    strcpy(str3, str2);  // str2'yi str3'e kopyala, �zerinde �al��aca��z.
    strrev(str3);  // str3'� ters �evir.
    printf("Str3'�n tersi: %s\n", str3);

    // 8. String arama (belirli bir karakteri bulma)
    char *ptr = strchr(str1, 'a');  // str1'deki 'a' karakterinin ilk konumunu bulur
    if (ptr != NULL) {
        printf("'a' karakteri str1'de bulundu, pozisyon: %ld\n", ptr - str1);
    } else {
        printf("'a' karakteri str1'de bulunamad�.\n");
    }

    return 0;
}
