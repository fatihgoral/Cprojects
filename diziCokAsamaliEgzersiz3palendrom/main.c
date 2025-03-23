#include <stdio.h>
#include <stdlib.h>
#define MAX 40

// Kullanıcıdan cümle okuma fonksiyonu
void cumleyi_oku(char tab[MAX]){
    int i = 0;
    scanf("%c", &tab[i]);
    while ((tab[i] != '\n') && i < MAX - 1) {
        i++;
        scanf("%c", &tab[i]);
    }
    tab[i] = '\0';
}

// Boşlukları kaldıran fonksiyon
void boslugu_kaldir(char tab[MAX]){
    int i, j = 0;
    for (i = 0; tab[i] != '\0'; i++) {
        if (tab[i] != ' ') {  // Boşlukları atla
            tab[j] = tab[i];
            j++;
        }
    }
    tab[j] = '\0';  // Yeni dizinin sonunu belirt
}

// Dizinin boyunu bulan fonksiyon
int dizinin_boyu(char tab[MAX]){
    int i;
    for (i = 0; tab[i] != '\0'; i++);
    return i;
}

// Diziyi tersine çeviren fonksiyon
void tersine_cevir(char can[MAX], char ters[MAX]){
    int i, j = dizinin_boyu(can) - 1;
    for (i = 0; can[i] != '\0'; i++) {
        ters[i] = can[j];
        j--;
    }
    ters[i] = '\0';  // Ters dizinin sonunu belirt
}

// Palindrom kontrolü yapan fonksiyon
int palindrome(char dizi[MAX]){
    int L, i, test = 1;
    char gecici[MAX];

    boslugu_kaldir(dizi);  // Boşlukları kaldır
    L = dizinin_boyu(dizi);  // Dizinin boyunu bul
    tersine_cevir(dizi, gecici);  // Diziyi ters çevir

    for (i = 0; i < L; i++) {
        if (gecici[i] != dizi[i]) {
            test = 0;  // Eğer bir karakter eşleşmezse palindrom değildir
            break;
        }
    }

    return test;
}

int main() {
    char cumle[MAX];
    int a;

    printf("Lutfen bir cumle ya da kelime giriniz:\n");
    cumleyi_oku(cumle);  // Kullanıcıdan cümle al
    a = palindrome(cumle);  // Palindrom olup olmadığını kontrol et

    if (a == 1) {
        printf("\nBu bir palindromdur\n");
    } else {
        printf("\nBu bir palindrom degildir\n");
    }

    return 0;
}
