#include <stdio.h>

int main() {
    int elemanSayisi, i;

    // Eleman sayýsýný kullanýcýdan al
    printf("Eleman sayisini girin: ");
    scanf("%d", &elemanSayisi);

    int dizi[elemanSayisi];  // Tek boyutlu dizi

    // Dizi elemanlarýný kullanýcýdan al
    printf("Dizi elemanlarini giriniz:\n");
    for (i = 0; i < elemanSayisi; i++) {
        printf("Eleman [%d]: ", i);
        scanf("%d", &dizi[i]);
    }

    int enBuyuk=dizi[0];
    int enKucuk=dizi[0];
    int toplam=0;

    for(i=0;i<elemanSayisi;i++){
      if(dizi[i]>enBuyuk){
       enBuyuk=dizi[i];
      }
      if(dizi[i]<enKucuk){
       enKucuk=dizi[i];
      }
  toplam+=dizi[i];

    }
    printf("dizinin en buyuk elemani: %d\n",enBuyuk);
    printf("dizinin en kucuk elemani: %d\n",enKucuk);
    printf("dizinin elemanlari toplami: %d\n",toplam);

    return 0;
}

