#include <stdio.h>

int main() {
    int havaDurumu, giyimTuru;

    printf("L�tfen hava durumunu se�iniz:\n");
    printf("1. G�ne�li\n2. Ya�murlu\n3. So�uk\n");
    scanf("%d", &havaDurumu);

    switch (havaDurumu) {
        case 1:
            printf("G�ne�li havada giyim se�imi yap�n�z:\n");
            printf("1. Ti��rt\n2. �ort\n3. Elbise\n");
            scanf("%d", &giyimTuru);
            switch (giyimTuru) {
                case 1: printf("Ti��rt se�tiniz.\n"); break;
                case 2: printf("�ort se�tiniz.\n"); break;
                case 3: printf("Elbise se�tiniz.\n"); break;
                default: printf("Hatal� giyim se�imi.\n"); break;
            }
            break;
        case 2:
            printf("Ya�murlu havada giyim se�imi yap�n�z:\n");
            printf("1. Ya�murluk\n2. �emsiye\n3. Bot\n");
            scanf("%d", &giyimTuru);
            switch (giyimTuru) {
                case 1: printf("Ya�murluk se�tiniz.\n"); break;
                case 2: printf("�emsiye se�tiniz.\n"); break;
                case 3: printf("Bot se�tiniz.\n"); break;
                default: printf("Hatal� giyim se�imi.\n"); break;
            }
            break;
        case 3:
            printf("So�uk havada giyim se�imi yap�n�z:\n");
            printf("1. Mont\n2. Bere\n3. Eldiven\n");
            scanf("%d", &giyimTuru);
            switch (giyimTuru) {
                case 1: printf("Mont se�tiniz.\n"); break;
                case 2: printf("Bere se�tiniz.\n"); break;
                case 3: printf("Eldiven se�tiniz.\n"); break;
                default: printf("Hatal� giyim se�imi.\n"); break;
            }
            break;
        default:
            printf("Hatal� hava durumu se�imi.\n");
            break;
    }

    return 0;
}
