#include <stdio.h>
#include <stdlib.h>
/*10 elemanlý bir dizi tanýmlayýnýz ve dizi elemanlarýný
döngü kullanarak atama iþlemlerini 1’den 10’a kadar
olacak þekilde atayýnýz. Daha sonrasýnda dizinin
elemanlarýný ekrana yazdýrýnýz. Ekrana yazdýrma
iþleminden sonra dizi elemanlarýnýn hepsinin karesini
alan fonksiyonu yazýnýz ve tekrardan dizi elemanlarýný
ekrana yazdýrýnýz. (Not: Fonksiyonun parametresi olarak
doðrudan diziyi gönderiniz. Dizi elemanlarýný tek tek
GÖNDERMEYÝNÝZ!)
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
