#include <stdio.h>
#include <stdlib.h>
  // klavyeden girilen 2 tamsayidan buyuk olanin fonksiyon kullanarak bulan c programini yaziniz
int bul(int x,int y){
    int buyukSayi;
if(x>y){
  return 1;
}else if (x<y){
    return 0;
}else{
return 2;
}
}


int main()
{
   int a,b;
   printf("lutfen 2 tam sayi giriniz ");
   scanf("%d %d",&a,&b);
  int sonuc= bul(a,b);
  if(sonuc==1){
    printf("%d sayisi %d sayisindan buyuktur\n",a,b);
  }else if(sonuc==0)
      printf("%d sayisi %d sayisindan buyýktur\n",b,a);
else{
        printf("%d sayisi %d sayisina esittir\n",a,b);
}
    return 0;
}

/*
#include <stdio.h>

void buyukOlanYazdir(int sayi1, int sayi2) {
    if (sayi1 > sayi2) {
        printf("Birinci sayi buyuktur: %d\n", sayi1);
    } else if (sayi1 < sayi2) {
        printf("Ikinci sayi buyuktur: %d\n", sayi2);
    } else {
        printf("Her iki sayi esit.\n");
    }
}

int main() {
    int sayi1, sayi2;

    // Kullanýcýdan iki tamsayý al
    printf("Birinci sayiyi girin: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi girin: ");
    scanf("%d", &sayi2);

    // Sonucu yazdýrmak için fonksiyonu çaðýr
    buyukOlanYazdir(sayi1, sayi2);

    return 0;
}
*/




