
#include <stdio.h>
#include <stdlib.h>


/*


Orijinal kodda, degistir fonksiyonuna a ve b deðiþkenlerinin deðerleri gönderiliyordu.
Fonksiyon bu deðerlerin kopyalarý üzerinde iþlem yapýyordu,
bu yüzden main fonksiyonundaki a ve b deðiþkenlerinin gerçek deðerleri deðiþmeden kalýyordu.

Yeni kodda ise, degistir fonksiyonuna a ve b deðiþkenlerinin adresleri (&a, &b) gönderildi.
Fonksiyon içindeki sayi1 ve sayi2 artýk a ve bnin adreslerini tutuyor.
Bu sayede, fonksiyon içinde yapýlan deðiþiklikler doðrudan a ve b deðiþkenlerinin kendisine yansýyor.

Bu yüzden, main fonksiyonundaki a ve b deðiþkenlerinin deðerleri gerçekten deðiþmiþ oluyor ve
 degistirtikten sonra ifadesiyle yapýlan yazdýrma iþleminde a ve b deðiþmiþ olarak görünüyor.

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
   printf("degistirmeden önce: %d , %d \n", a, b);
   degistir(&a, &b);  // Adresleri gönderiyoruz
   printf("degistirtikten sonra: %d, %d\n", a, b);
   return 0;
}
