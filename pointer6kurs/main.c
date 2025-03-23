
#include <stdio.h>
#include <stdlib.h>

//Buradaki olay  fonksiyonda tanýmladýðýmýz a ve b parametreleri sýrasýyla x ve y nin deðerini alýyor .Fonksiyon içinde a ve b deðerleri
//deðiþtirdiðinde x ve y bundan etkilenmiyor .Ve fonksiyon tamamlandýðýnda a ve b deðerleri ram den siliniyor.
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
   printf("degistirmeden önce: %d , %d \n",a,b);
   degistir(a,b);
   printf("degistirtikten sonra: %d,%d\n",a,b);
    return 0;
}
