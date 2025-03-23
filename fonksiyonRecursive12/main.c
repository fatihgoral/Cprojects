#include <stdio.h>
#include <stdlib.h>
/* Klavyeden 0 girilinceuye kadar kullanicidan sürekli olarak
sayi girmesini isteyen program*/
void sayiiste(){
int sayi;
printf("lutfen bir sayi giriniz:");
scanf("%d",&sayi);
if(sayi==0){
    return;
}else{
sayiiste();
}

}


int main()
{
   sayiiste();
    return 0;
}
