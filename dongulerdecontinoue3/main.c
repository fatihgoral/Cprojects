#include <stdio.h>
//continue deyimi, bir dongude belirli bir kosul saglandiginda yalnizca o iterasyondaki kalan kod satirlarini atlar. Yani, o iterasyon icinde continue deyiminden sonra
//gelen kodlari calistirmaz ve dongunun bir sonraki turuna gecler. Ancak dongunun tamamini sonlandirmaz; yalnizca o anki turu atlar.
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Çift sayýlarý atla
        }
        printf("%d ", i);
    }
    return 0;
}
// Çýktý: 1 3 5 7 9

