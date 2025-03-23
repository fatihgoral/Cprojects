#include <stdio.h>
#include <string.h>

int main() {
    // 1. String tanýmlama ve baþlatma
    char str1[20] = "Merhaba";
    char str2[20];

    // 2. Kullanýcýdan string alma
    printf("Bir string girin: ");
    fgets(str2, sizeof(str2), stdin);  // fgets kullanýmý, buffer taþmalarýný önlemek için güvenlidir.

    // 3. Stringin uzunluðunu bulma
    int length1 = strlen(str1);  // str1'in uzunluðu
    int length2 = strlen(str2) - 1;  // fgets sonuna \n ekler, bu yüzden çýkardýk.

    printf("Str1 uzunluðu: %d\n", length1);
    printf("Str2 uzunluðu: %d (yeni satýr karakteri hariç)\n", length2);

    // 4. String birleþtirme (concatenation)
    strcat(str1, " Dünya!");  // str1'e " Dünya!" ekler.
    printf("Birleþtirilmiþ string: %s\n", str1);

    // 5. String kopyalama
    strcpy(str2, str1);  // str2'ye str1'i kopyalar
    printf("Str2'nin yeni deðeri: %s\n", str2);

    // 6. String karþýlaþtýrma
    if (strcmp(str1, str2) == 0) {
        printf("Str1 ve Str2 eþit.\n");
    } else {
        printf("Str1 ve Str2 eþit deðil.\n");
    }

    // 7. String ters çevirme
    char str3[20];
    strcpy(str3, str2);  // str2'yi str3'e kopyala, üzerinde çalýþacaðýz.
    strrev(str3);  // str3'ü ters çevir.
    printf("Str3'ün tersi: %s\n", str3);

    // 8. String arama (belirli bir karakteri bulma)
    char *ptr = strchr(str1, 'a');  // str1'deki 'a' karakterinin ilk konumunu bulur
    if (ptr != NULL) {
        printf("'a' karakteri str1'de bulundu, pozisyon: %ld\n", ptr - str1);
    } else {
        printf("'a' karakteri str1'de bulunamadý.\n");
    }

    return 0;
}
