#include <stdio.h>
#include <stdlib.h>
#define MAX 40

// Dizinin boyunu hesaplayan fonksiyon
void boy(char tab[MAX], int *canan) {
    int i;
    for(i = 0; tab[i] != '\0'; i++) {
        *canan = i;
    }
    *canan = i;  // Döngü sonlandýktan sonra 'i'yi atar
}

// iki dizide ortak karakterleri sayan fonksiyon
void ortak_harf(char tab[MAX], char can[MAX], int *t) {
    int i, j;
    int kelime1, kelime2;
    *t = 0;

    boy(tab, &kelime1);
    boy(can, &kelime2);

    for(i = 0; i < kelime1; i++) {
        for(j = 0; j < kelime2; j++) {
            if(tab[i] == can[j]) {
                *t = *t + 1;
            }
        }
    }
}

int main() {
    char cumle[MAX], tab[MAX];
    int i = 0;
    int a;

    // Kullanicidan bir cümle al
    printf("Lutfen bir cumle veya kelime giriniz: ");
    do {
        scanf("%c", &cumle[i]);
        i++;
    } while(cumle[i-1] != '\n');  // Satir sonuna kadar karakterleri al

    cumle[i-1] = '\0';  // Diziyi sonlandirici karakter ile bitir

    boy(cumle, &a);
    printf("Dizimizin boyu: %d\n", a);

    // iki kelime al
    printf("Lutfen iki kelime giriniz: ");
    scanf("%s %s", cumle, tab);

    int r;
    ortak_harf(cumle, tab, &r);
    printf("%s ve %s %d kadar ortak karakter sahiptir\n", cumle, tab, r);

    return 0;
}
