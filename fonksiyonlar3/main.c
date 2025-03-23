#include <stdio.h>
#include <stdlib.h>


int sumNumbers(int x,int y){
   return x+y;
}
int main()
{
   printf("result %d\n:", sumNumbers(4,18));


  // geri gelen islemle tekrardan yeni bir islem yapmak istedigimiizde
   // burda göstermek istedigimiz sey void fonmksiyon yerine
   // return kullanmanin cok daha avantajlı oldugunu gostermek
   // cunku void kullandigimizda o fonksiyon ekrana yazar ve gider ama return olursa tekrardan gelen
   // degerle yeni islemler yapabiliriz
   int myNumber=sumNumbers(4,18)*5;
   printf("result : %d",myNumber);

    return 0;
}
