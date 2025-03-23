#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    double wheat=1;
    double sumWheat=0;
    for(i=1;i<=64;i++){
    printf("%d. kare ici bugday sayisi:%20.0f\n",i,wheat);
       sumWheat+=wheat;
       wheat*=2;
    }
       printf("\n verilecek toplam bugday sayisi:%20.0f\n",sumWheat);

    return 0;
}
//Bu kod, bir satranc tahtasinin her karesine yerlestirilen buðday tanelerinin sayisini hesaplar.
// Her karedeki buðday sayisi bir önceki karenin iki katidir
// Program, tüm kareler için toplam bugday sayisini da hesaplayarak ekrana yazdirir.
//





