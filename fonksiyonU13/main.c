#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen pozitif n sayisina kadar olan tek sayilari ekrana listeleyen bir C programini fonk kullanarak yaziniz
void say(int n){
for(int i=1;i<=n;i++){
    if(i%2==1){
        printf("%d  ",i);
    }
}
}

int main()
{
    int sayi;
   printf("lutfen bir sayiyi giriniz");
   scanf("%d",&sayi);
   say(sayi);

    return 0;
}
