#include <stdio.h>
#include <stdlib.h>
// klavyeden negatif bir deger girilinceye kadar kullanicidan s�rekli sayi isteyen C pro�ram�n� yaziniz
void sayial(){
int sayi;
 printf("Bir sayi girin : ");
    scanf("%d", &sayi);
while(sayi>=0){
        printf("girdiginiz sayi: %d\n",sayi);
    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
}

}

int main()
{
  sayial();
printf("negatif sayi girdiniz program sonlandirilidi... ");
    return 0;
}
