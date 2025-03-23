#include <stdio.h>
#include <stdlib.h>
// klavyeden negatif bir deger girilinceye kadar kullanicidan sürekli sayi isteyen C programini yaziniz

void sayial(){
    int sayi;
do{

    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
if(sayi>=0){
     printf("girdiginiz sayi: %d\n",sayi);
}
}while(sayi>=0);


}

int main()
{
  sayial();
printf("negatif sayi girdiniz program sonlandirilidi... ");
    return 0;
}

