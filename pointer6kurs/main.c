
#include <stdio.h>
#include <stdlib.h>

//Buradaki olay  fonksiyonda tan�mlad���m�z a ve b parametreleri s�ras�yla x ve y nin de�erini al�yor .Fonksiyon i�inde a ve b de�erleri
//de�i�tirdi�inde x ve y bundan etkilenmiyor .Ve fonksiyon tamamland���nda a ve b de�erleri ram den siliniyor.
void degistir(int sayi1,int sayi2){
    int gecici;
gecici=sayi1;
sayi1=sayi2;
sayi2=gecici;

printf("ilk sayim :%d ve ikinci sayim :%d\n",sayi1,sayi2);

}
int main()
{
   int a=10;
   int b=20;
   printf("degistirmeden �nce: %d , %d \n",a,b);
   degistir(a,b);
   printf("degistirtikten sonra: %d,%d\n",a,b);
    return 0;
}
