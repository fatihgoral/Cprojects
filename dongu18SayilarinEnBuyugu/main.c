#include <stdio.h>
#include <stdlib.h>



int main() {
    int number, largestNumber = 0, smallestNumber = 0;
    int i = 1;
    int firstInput = 1; // �lk giri� kontrol� i�in kullan�lan bayrak

    do {
        printf("%d. say�y� giriniz (0 girerek ��k�� yapabilirsiniz): ", i);
        scanf("%d", &number);

        if (firstInput) {
            // �lk giri� oldu�unda en b�y�k ve en k���k say�y� ilk giri�e g�re ayarla
            largestNumber = number;
            smallestNumber = number;
            firstInput = 0; // �lk giri� yap�ld�, bayra�� kapat
        } else {
            // �lk giri� de�ilse, say�lar� kar��la�t�r
            if (number < smallestNumber)
                smallestNumber = number;
            if (number > largestNumber)
                largestNumber = number;
        }

        i++;
    } while (number != 0);

    if (i == 1) {
        printf("Hi�bir say� girilmedi.\n");
    } else {
        printf("En b�y�k say�: %d\n", largestNumber);
        printf("En k���k say�: %d\n", smallestNumber);
    }

    return 0;
}

