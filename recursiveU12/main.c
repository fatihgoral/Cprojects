#include <stdio.h>
#include <stdlib.h>
// recursive fonksiyon kullanarak klavyeden 0 girilinceye kadar kullanicidan sayi isteyen programi yaziniz
void sayiiste(){
int sayi;
printf("lutfen bir sayi giriiniz: ");
scanf("%d",&sayi);
if(sayi==0){
    exit(0);
}
else{
    sayiiste();
}

}

int main()
{
 sayiiste();
    return 0;
}
