#include <stdio.h>
#include <stdlib.h>

int main() {
    float odev1, odev2, odev3;
    float quiz1, quiz2, quiz3;
    float araSinav1, araSinav2;
    float final;
    float dersNotu;

    // Ödev notlarýný al
    printf("Ödev 1 notunu giriniz: ");
    scanf("%f", &odev1);
    printf("Ödev 2 notunu giriniz: ");
    scanf("%f", &odev2);
    printf("Ödev 3 notunu giriniz: ");
    scanf("%f", &odev3);

    // Quiz notlarýný al
    printf("Quiz 1 notunu giriniz: ");
    scanf("%f", &quiz1);
    printf("Quiz 2 notunu giriniz: ");
    scanf("%f", &quiz2);
    printf("Quiz 3 notunu giriniz: ");
    scanf("%f", &quiz3);

    // Ara sýnav notlarýný al
    printf("Ara Sýnav 1 notunu giriniz: ");
    scanf("%f", &araSinav1);
    printf("Ara Sýnav 2 notunu giriniz: ");
    scanf("%f", &araSinav2);

    // Final notunu al
    printf("Final notunu giriniz: ");
    scanf("%f", &final);

    // Ders notunu hesapla
    dersNotu = (odev1 * 0.03) + (odev2 * 0.03) + (odev3 * 0.03) +
               (quiz1 * 0.07) + (quiz2 * 0.07) + (quiz3 * 0.07) +
               (araSinav1 * 0.15) + (araSinav2 * 0.15) +
               (final * 0.40);

    // Ders notunu ekrana yazdýr
    printf("Ders Notu: %.2f\n", dersNotu);

    return 0;

}











