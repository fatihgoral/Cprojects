#include <stdio.h>

int main() {
    char cumle[100];
    int sayac[26] = {0}; // Alfabenin her harfi için bir sayaç dizisi

    printf("Bir cumle giriniz (cumleyi noktali bitirin): ");
    fgets(cumle, sizeof(cumle), stdin);

    // Cümledeki her karakteri kontrol et
    for (int i = 0; cumle[i] != '.'; i++) {
        if (cumle[i] >= 'a' && cumle[i] <= 'z') {
            sayac[cumle[i] - 'a']++; // Küçük harfler için sayaç artýr
        } else if (cumle[i] >= 'A' && cumle[i] <= 'Z') {
            sayac[cumle[i] - 'A']++; // Büyük harfler için sayaç artýr
        }
    }

    // Sonuçlarý ekrana yazdýr
    printf("Harflerin sayilari:\n");
    for (int i = 0; i < 26; i++) {
        if (sayac[i] > 0) {
            printf("%c : %d\n", 'a' + i, sayac[i]);
        }
    }

    return 0;
}





}
