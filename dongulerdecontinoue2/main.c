#include <stdio.h>
//continue deyimi, bir dongude belirli bir kosul saglandiginda yalnizca o iterasyondaki kalan kod satirlarini atlar. Yani, o iterasyon icinde continue deyiminden sonra
//gelen kodlari calistirmaz ve dongunun bir sonraki turuna gecler. Ancak dongunun tamamini sonlandirmaz; yalnizca o anki turu atlar.
int main() {
int main() {
    char str[] = "Hello World!";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            continue; // Boþluklarý atla
        }
        putchar(str[i]);
    }
    return 0;
}


