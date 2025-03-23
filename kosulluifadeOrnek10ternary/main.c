#include <stdio.h>

int main() {
    int havaDurumu, giyimTuru;

    printf("Lütfen hava durumunu seçiniz:\n");
    printf("1. Güneþli\n2. Yaðmurlu\n3. Soðuk\n");
    scanf("%d", &havaDurumu);

    (havaDurumu == 1) ? (
        printf("Güneþli havada giyim seçimi yapýnýz:\n"),
        printf("1. Tiþört\n2. Þort\n3. Elbise\n"),
        scanf("%d", &giyimTuru),
        (giyimTuru == 1) ? printf("Tiþört seçtiniz.\n") :
        (giyimTuru == 2) ? printf("Þort seçtiniz.\n") :
        (giyimTuru == 3) ? printf("Elbise seçtiniz.\n") :
        printf("Hatalý giyim seçimi.\n")
    ) : (havaDurumu == 2) ? (
        printf("Yaðmurlu havada giyim seçimi yapýnýz:\n"),
        printf("1. Yaðmurluk\n2. Þemsiye\n3. Bot\n"),
        scanf("%d", &giyimTuru),
        (giyimTuru == 1) ? printf("Yaðmurluk seçtiniz.\n") :
        (giyimTuru == 2) ? printf("Þemsiye seçtiniz.\n") :
        (giyimTuru == 3) ? printf("Bot seçtiniz.\n") :
        printf("Hatalý giyim seçimi.\n")
    ) : (havaDurumu == 3) ? (
        printf("Soðuk havada giyim seçimi yapýnýz:\n"),
        printf("1. Mont\n2. Bere\n3. Eldiven\n"),
        scanf("%d", &giyimTuru),
        (giyimTuru == 1) ? printf("Mont seçtiniz.\n") :
        (giyimTuru == 2) ? printf("Bere seçtiniz.\n") :
        (giyimTuru == 3) ? printf("Eldiven seçtiniz.\n") :
        printf("Hatalý giyim seçimi.\n")
    ) : printf("Hatalý hava durumu seçimi.\n");

    return 0;
}
