#include <stdio.h>
#include <string.h>  // strcpy fonksiyonu i�in

struct adres {
    char sokak[100];
    int no;
    char sehir[50];
};

struct kisi {
    char ad[50];
    char soyad[50];
    struct adres ev_adresi;  // �� i�e struct kullan�m�
};

int main() {
    struct kisi k;  // Kisi t�r�nde bir de�i�ken

    // Kullan�c�dan bilgileri al�yoruz
    printf("Ad: ");
    scanf("%s", k.ad);  // Ad� al�yoruz

    printf("Soyad: ");
    scanf("%s", k.soyad);  // Soyad� al�yoruz

    printf("Adres Sokak: ");
    scanf("%s", k.ev_adresi.sokak);  // Sokak ismini al�yoruz

    printf("Adres No: ");
    scanf("%d", &k.ev_adresi.no);  // Numaray� al�yoruz

    printf("Sehir: ");
    scanf("%s", k.ev_adresi.sehir);  // �ehir ismini al�yoruz

    // Bilgileri yazd�r�yoruz
    printf("\nKi�i Bilgileri:\n");
    printf("Ad: %s\n", k.ad);
    printf("Soyad: %s\n", k.soyad);
    printf("Adres: %s, No: %d, Sehir: %s\n", k.ev_adresi.sokak, k.ev_adresi.no, k.ev_adresi.sehir);

    return 0;
}
