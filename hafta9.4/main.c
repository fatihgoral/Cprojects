#include <stdio.h>
#include <stdlib.h>
/*10 elemanl� bir dizi tan�mlay�n�z ve dizi elemanlar�n�
d�ng� kullanarak atama i�lemlerini 1�den 10�a kadar
olacak �ekilde atay�n�z. Daha sonras�nda dizinin
elemanlar�n� ekrana yazd�r�n�z. Ekrana yazd�rma
i�leminden sonra dizi elemanlar�n�n hepsinin karesini
alan fonksiyonu yaz�n�z ve tekrardan dizi elemanlar�n�
ekrana yazd�r�n�z. (Not: Fonksiyonun parametresi olarak
do�rudan diziyi g�nderiniz. Dizi elemanlar�n� tek tek
G�NDERMEY�N�Z!)
*/
void calculus(int dizim[]){
for(int i=0;i<10;i++){
    dizim[i]=dizim[i]*dizim[i];
    }
for(int i=0;i<10;i++){
    printf("%3d ",dizim[i]);
}

}


int main()
{
    int i;
    int dizi[10];
    for(i=0;i<=9;i++){
        dizi[i]=i+1;
    }
    for(i=0;i<10;i++){
        printf("%3d ",dizi[i]);
    }
    printf("\n");
 calculus(dizi);
    return 0;
}
