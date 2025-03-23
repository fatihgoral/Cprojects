#include <stdio.h>
#include <stdlib.h>
// floyd ucgenini sayilarla olusturma
void floyd(int n){
    int sayi=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",sayi);
        sayi++;
    }
    printf("\n");
}


}



int main()
{
    int satir;
    printf("floyd ucgeni icin satir sayisini giriniz");
    scanf("%d",&satir);
    floyd(satir);

    return 0;
}
