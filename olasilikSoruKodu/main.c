#include <stdio.h>

int main() {
    int toys, kids;
    int total_ways = 1;

    // Kullan�c�dan oyuncak ve �ocuk say�s�n� al
    printf("Lutfen oyuncak sayisini giriniz: ");
    scanf("%d", &toys);

    printf("Lutfen cocuk sayisini giriniz: ");
    scanf("%d", &kids);

    // Oyuncak say�s� �ocuk say�s�ndan azsa veya e�itse i�lemi yap
    if (toys >= kids) {
        // Oyuncaklar� se�ip da��tmak i�in olas�l�klar� hesapla
        for (int i = 0; i < kids; i++) {
            total_ways *= (toys - i); // Oyuncaklar�n �ocuklara da��t�m�
        }
    } else {
        printf("Oyuncak sayisi cocuk sayisindan az olamaz.\n");
        return 1;
    }

    printf("Toplam farkli dagitim sekli: %d\n", total_ways);

    return 0;
}
