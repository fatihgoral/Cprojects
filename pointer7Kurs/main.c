
#include <stdio.h>
#include <stdlib.h>


/*


Orijinal kodda, degistir fonksiyonuna a ve b de�i�kenlerinin de�erleri g�nderiliyordu.
Fonksiyon bu de�erlerin kopyalar� �zerinde i�lem yap�yordu,
bu y�zden main fonksiyonundaki a ve b de�i�kenlerinin ger�ek de�erleri de�i�meden kal�yordu.

Yeni kodda ise, degistir fonksiyonuna a ve b de�i�kenlerinin adresleri (&a, &b) g�nderildi.
Fonksiyon i�indeki sayi1 ve sayi2 art�k a ve bnin adreslerini tutuyor.
Bu sayede, fonksiyon i�inde yap�lan de�i�iklikler do�rudan a ve b de�i�kenlerinin kendisine yans�yor.

Bu y�zden, main fonksiyonundaki a ve b de�i�kenlerinin de�erleri ger�ekten de�i�mi� oluyor ve
 degistirtikten sonra ifadesiyle yap�lan yazd�rma i�leminde a ve b de�i�mi� olarak g�r�n�yor.

*/
void degistir(int *sayi1, int *sayi2) {
    int gecici;
    gecici = *sayi1;
    *sayi1 = *sayi2;
    *sayi2 = gecici;
}

int main() {
   int a = 10;
   int b = 20;
   printf("degistirmeden �nce: %d , %d \n", a, b);
   degistir(&a, &b);  // Adresleri g�nderiyoruz
   printf("degistirtikten sonra: %d, %d\n", a, b);
   return 0;
}
