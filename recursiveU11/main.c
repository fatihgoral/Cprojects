#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen bir N sayisina kadar olan tek sayilari listeleme islemini recursive fonksiyonu kullanarak yaziniz

void listele(int sayi) {
  if(sayi<1){
    return;
  }
else if(sayi%2==1){
    printf("%3d",sayi);
}
listele(sayi-1);

}
int main()
{
    int N;

    printf("Bir sayi giriniz: ");
    scanf("%d", &N);

    printf("1'den %d'e kadar olan tek sayilar:\n", N);
    listele(N);
    printf("\n");

    return 0;
}

