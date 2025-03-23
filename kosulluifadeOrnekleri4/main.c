#include <stdio.h>
//kullanicinin girdigi iki sayi olan a ve b sayisini esit mi a mý büyük b müyük bulan ve ekrana yazdiran c programini yaziniz
int main() {
    int a, b;


    printf("Birinci sayiyi girin (a): ");
    scanf("%d", &a);

    printf("Ikinci sayiyi girin (b): ");
    scanf("%d", &b);


    (a > b) ? printf("a (%d) b'den (%d) buyuktur.\n", a, b) :
    (a < b) ? printf("b (%d) a'dan (%d) buyuktur.\n", b, a) :
              printf("a ve b (%d) esittir.\n", a);

    return 0;
}
