#include <stdio.h>
#include <stdlib.h>



int main() {
    int number, largestNumber = 0, smallestNumber = 0;
    int i = 1;
    int firstInput = 1; // Ýlk giriþ kontrolü için kullanýlan bayrak

    do {
        printf("%d. sayýyý giriniz (0 girerek çýkýþ yapabilirsiniz): ", i);
        scanf("%d", &number);

        if (firstInput) {
            // Ýlk giriþ olduðunda en büyük ve en küçük sayýyý ilk giriþe göre ayarla
            largestNumber = number;
            smallestNumber = number;
            firstInput = 0; // Ýlk giriþ yapýldý, bayraðý kapat
        } else {
            // Ýlk giriþ deðilse, sayýlarý karþýlaþtýr
            if (number < smallestNumber)
                smallestNumber = number;
            if (number > largestNumber)
                largestNumber = number;
        }

        i++;
    } while (number != 0);

    if (i == 1) {
        printf("Hiçbir sayý girilmedi.\n");
    } else {
        printf("En büyük sayý: %d\n", largestNumber);
        printf("En küçük sayý: %d\n", smallestNumber);
    }

    return 0;
}

