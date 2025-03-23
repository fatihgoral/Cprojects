//klavyeden girilerek kullanicadan alinan bir sayiya kadar
// 2 nin kuvvetlerinin listelenmesi recursive fonksiyon ile saglayan program*/

#include <stdio.h>
#include <stdlib.h>

ikininKuvvetleri(int n){
  int deger;
if(n==0){

    deger=1;
    }else{
    deger=2*ikininKuvvetleri(n-1);
    }
    printf("%d\n",deger);
    return deger;
}
int main()
{
    int sayi;
  printf("lutfen bir sayi giriniz : ");
  scanf("%d",&sayi);
  printf("%d sayisina kadar olan 2 nin kuvvetleri\n",sayi);
  ikininKuvvetleri(sayi);
    return 0;
}


