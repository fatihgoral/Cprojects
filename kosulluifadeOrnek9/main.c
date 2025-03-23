#include <stdio.h>

int main() {
    int havaDurumu, giyimTuru;

    printf("Lütfen hava durumunu seçiniz:\n");
    printf("1. Güneþli\n2. Yaðmurlu\n3. Soðuk\n");
    scanf("%d", &havaDurumu);

    switch (havaDurumu) {
        case 1:
            printf("Güneþli havada giyim seçimi yapýnýz:\n");
            printf("1. Tiþört\n2. Þort\n3. Elbise\n");
            scanf("%d", &giyimTuru);
            switch (giyimTuru) {
                case 1: printf("Tiþört seçtiniz.\n"); break;
                case 2: printf("Þort seçtiniz.\n"); break;
                case 3: printf("Elbise seçtiniz.\n"); break;
                default: printf("Hatalý giyim seçimi.\n"); break;
            }
            break;
        case 2:
            printf("Yaðmurlu havada giyim seçimi yapýnýz:\n");
            printf("1. Yaðmurluk\n2. Þemsiye\n3. Bot\n");
            scanf("%d", &giyimTuru);
            switch (giyimTuru) {
                case 1: printf("Yaðmurluk seçtiniz.\n"); break;
                case 2: printf("Þemsiye seçtiniz.\n"); break;
                case 3: printf("Bot seçtiniz.\n"); break;
                default: printf("Hatalý giyim seçimi.\n"); break;
            }
            break;
        case 3:
            printf("Soðuk havada giyim seçimi yapýnýz:\n");
            printf("1. Mont\n2. Bere\n3. Eldiven\n");
            scanf("%d", &giyimTuru);
            switch (giyimTuru) {
                case 1: printf("Mont seçtiniz.\n"); break;
                case 2: printf("Bere seçtiniz.\n"); break;
                case 3: printf("Eldiven seçtiniz.\n"); break;
                default: printf("Hatalý giyim seçimi.\n"); break;
            }
            break;
        default:
            printf("Hatalý hava durumu seçimi.\n");
            break;
    }

    return 0;
}
