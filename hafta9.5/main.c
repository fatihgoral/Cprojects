#include <stdio.h>
#include <stdlib.h>

int calculus(int number) {
  int result=(number>0)?number*number*number:number*number;
  return result;
}
int main() {
    int sayi;
    printf("lutfen 1 sayi giriniz");
    scanf("%d",&sayi);
   int sonuc=calculus(sayi);
    if(sayi>0){
        printf("kup islemi sonucu : %d",sonuc);
    }
   else if(sayi<0){
            printf("kare islemi sonucu : %d",sonuc);

   }
    return 0;
}
