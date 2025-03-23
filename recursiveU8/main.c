#include <stdio.h>
#include <stdlib.h>
/* klavyeden girilen bir N sayisindan baslayarak asagý yönde azalacak sekilde ekrana yildiz basan
c programini recursive fonksiyon yardimiyla yaziniz

*****
****
***
**
*

*/
sirala(int sayi){
    int i;
if(sayi==0){
    return 0;
}
else{
    for(i=0;i<sayi;i++){
        printf("* ");

    }
    printf("\n");
    sirala(sayi-1);

}
}

int main()
{
    int N;
printf("Baslangic sayisini giriniz: ");
scanf("%d",&N);
sirala(N);

    return 0;
}
