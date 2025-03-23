#include <stdio.h>
#include <string.h>  // strcpy fonksiyonu için

struct adres {
    char sokak[100];
    int no;
    char sehir[50];
};

struct kisi {
    char ad[50];
    char soyad[50];
    struct adres ev_adresi;  // Ýç içe struct kullanýmý
};

int main() {
    struct kisi k;  // Kisi türünde bir deðiþken

    // Kullanýcýdan bilgileri alýyoruz
    printf("Ad: ");
    scanf("%s", k.ad);  // Adý alýyoruz

    printf("Soyad: ");
    scanf("%s", k.soyad);  // Soyadý alýyoruz

    printf("Adres Sokak: ");
    scanf("%s", k.ev_adresi.sokak);  // Sokak ismini alýyoruz

    printf("Adres No: ");
    scanf("%d", &k.ev_adresi.no);  // Numarayý alýyoruz

    printf("Sehir: ");
    scanf("%s", k.ev_adresi.sehir);  // Þehir ismini alýyoruz

    // Bilgileri yazdýrýyoruz
    printf("\nKiþi Bilgileri:\n");
    printf("Ad: %s\n", k.ad);
    printf("Soyad: %s\n", k.soyad);
    printf("Adres: %s, No: %d, Sehir: %s\n", k.ev_adresi.sokak, k.ev_adresi.no, k.ev_adresi.sehir);

    return 0;
}
