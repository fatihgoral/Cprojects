#include <stdio.h>
#include <stdlib.h>
// while dongusu kullanarak kullanicidan pozitif bir deger alin girilen degerden 1 e kadar olan
//degerleri ekrana bastirin ornek program: 10 9 8 7 6 5 4 3 2 1

int main()
{
    int sayi,i;
     printf("lutfen pozitif bir deger girin");
     scanf("%d",&sayi);


    while(sayi!=0){
       printf("%d\n",sayi);
      sayi--;
    }
    return 0;
}
