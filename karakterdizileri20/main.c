#include <stdio.h>

int main() {
    char cumle[100];
    int sayac[26] = {0}; // Alfabenin her harfi i�in bir saya� dizisi

    printf("Bir cumle giriniz (cumleyi noktali bitirin): ");
    fgets(cumle, sizeof(cumle), stdin);

    // C�mledeki her karakteri kontrol et
    for (int i = 0; cumle[i] != '.'; i++) {
        if (cumle[i] >= 'a' && cumle[i] <= 'z') {
            sayac[cumle[i] - 'a']++; // K���k harfler i�in saya� art�r
        } else if (cumle[i] >= 'A' && cumle[i] <= 'Z') {
            sayac[cumle[i] - 'A']++; // B�y�k harfler i�in saya� art�r
        }
    }

    // Sonu�lar� ekrana yazd�r
    printf("Harflerin sayilari:\n");
    for (int i = 0; i < 26; i++) {
        if (sayac[i] > 0) {
            printf("%c : %d\n", 'a' + i, sayac[i]);
        }
    }

    return 0;
}





}
