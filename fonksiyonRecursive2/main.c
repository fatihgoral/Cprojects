#include<stdio.h>
#include <stdlib.h>
void listele(int sayi);
int main()
{
    int sayi;
    /*klavyeden girilen bir N pozitif tamsayisina kadar olan sayilarin toplanarak sonucun ekrana
     gösterilmesini saglayan c programýný recursive fonsksiyon ile yaz
*/
printf("enter a number please :");
scanf("%d",&sayi);
listele(sayi);

    return 0;
}
void listele(int sayi)
{
    if(sayi==0){
        printf("%2d",sayi);
    }
    else{
        printf("%2d",sayi);
        listele(sayi-1);
    }
}
