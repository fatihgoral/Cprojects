#include <stdio.h>
#include <stdlib.h>
// atoi atol atof
int main() {
    const char *str1 = "123";
    const char *str2 = "456";
    const char *str3 = "abc";  // Geçersiz sayýlar
    const char *str4 = "12abc";  // Kýsmi geçerli sayý

    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    int num4 = atoi(str4);

    printf("Num1: %d\n", num1);  // Çýktý: 123
    printf("Num2: %d\n", num2);  // Çýktý: 456
    printf("Num3: %d\n", num3);  // Çýktý: 0 (geçersiz string)
    printf("Num4: %d\n", num4);  // Çýktý: 12 (ilk geçerli sayý)

    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str1 = "123456789";
    const char *str2 = "987654321";
    const char *str3 = "xyz";  // Geçersiz
    const char *str4 = "123abc";  // Kýsmi geçerli

    long num1 = atol(str1);
    long num2 = atol(str2);
    long num3 = atol(str3);
    long num4 = atol(str4);

    printf("Num1: %ld\n", num1);  // Çýktý: 123456789
    printf("Num2: %ld\n", num2);  // Çýktý: 987654321
    printf("Num3: %ld\n", num3);  // Çýktý: 0 (geçersiz string)
    printf("Num4: %ld\n", num4);  // Çýktý: 123 (ilk geçerli sayý)

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str1 = "123.45";
    const char *str2 = "987.65";
    const char *str3 = "hello";  // Geçersiz
    const char *str4 = "12.34abc";  // Kýsmi geçerli

    double num1 = atof(str1);
    double num2 = atof(str2);
    double num3 = atof(str3);
    double num4 = atof(str4);

    printf("Num1: %.2f\n", num1);  // Çýktý: 123.45
    printf("Num2: %.2f\n", num2);  // Çýktý: 987.65
    printf("Num3: %.2f\n", num3);  // Çýktý: 0.00 (geçersiz string)
    printf("Num4: %.2f\n", num4);  // Çýktý: 12.34 (ilk geçerli sayý)

    return 0;
}
*/
