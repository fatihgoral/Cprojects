#include <stdio.h>
#include <stdlib.h>
void sayiiste(){
int sayi;
while(1){
    printf("lutfen 1 sayi giriniz");
    scanf("%d",&sayi);
    if(sayi<0){
        break;
    }
}

}
int main()
{
    sayiiste();
    return 0;
}
