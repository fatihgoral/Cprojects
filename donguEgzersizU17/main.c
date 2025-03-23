#include <stdio.h>
#include <stdlib.h>
// girilen bir sayinin tersini bulma ornegin 123 girilince 321
int main()
{
    int ters=0;
    int kalan,sayi;
    printf("lutfen bir sayi girin");
    scanf("%d",&sayi);
    while(sayi!=0){
       kalan=sayi%10;
        ters=ters*10+kalan;
        sayi/=10;

    }
    printf("sayinin ters cevrilmis hali:",ters);

    return 0;
}
