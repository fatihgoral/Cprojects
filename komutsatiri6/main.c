#include <stdio.h>
#include <stdlib.h>
// atoi atol atof
int main() {
    const char *str1 = "123";
    const char *str2 = "456";
    const char *str3 = "abc";  // Ge�ersiz say�lar
    const char *str4 = "12abc";  // K�smi ge�erli say�

    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    int num4 = atoi(str4);

    printf("Num1: %d\n", num1);  // ��kt�: 123
    printf("Num2: %d\n", num2);  // ��kt�: 456
    printf("Num3: %d\n", num3);  // ��kt�: 0 (ge�ersiz string)
    printf("Num4: %d\n", num4);  // ��kt�: 12 (ilk ge�erli say�)

    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str1 = "123456789";
    const char *str2 = "987654321";
    const char *str3 = "xyz";  // Ge�ersiz
    const char *str4 = "123abc";  // K�smi ge�erli

    long num1 = atol(str1);
    long num2 = atol(str2);
    long num3 = atol(str3);
    long num4 = atol(str4);

    printf("Num1: %ld\n", num1);  // ��kt�: 123456789
    printf("Num2: %ld\n", num2);  // ��kt�: 987654321
    printf("Num3: %ld\n", num3);  // ��kt�: 0 (ge�ersiz string)
    printf("Num4: %ld\n", num4);  // ��kt�: 123 (ilk ge�erli say�)

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str1 = "123.45";
    const char *str2 = "987.65";
    const char *str3 = "hello";  // Ge�ersiz
    const char *str4 = "12.34abc";  // K�smi ge�erli

    double num1 = atof(str1);
    double num2 = atof(str2);
    double num3 = atof(str3);
    double num4 = atof(str4);

    printf("Num1: %.2f\n", num1);  // ��kt�: 123.45
    printf("Num2: %.2f\n", num2);  // ��kt�: 987.65
    printf("Num3: %.2f\n", num3);  // ��kt�: 0.00 (ge�ersiz string)
    printf("Num4: %.2f\n", num4);  // ��kt�: 12.34 (ilk ge�erli say�)

    return 0;
}
*/
