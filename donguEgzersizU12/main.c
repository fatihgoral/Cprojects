#include <stdio.h>
#include <stdlib.h>
int main() {
    int sayi;
    int toplam = 0;
    int i;

    printf("Lutfen pozitif bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi >= 0) {  // Koþul parantez içinde doðru þekilde yazýldý
        i = 0;
        while (i <= sayi) {
            toplam += i;
            i++;
        }
        printf("Toplam degeri: %d\n", toplam);
    } else {
        printf("Lutfen pozitif bir sayi giriniz.\n");
    }

    return 0;
}





/*int sayi;
 int toplam=0;

printf("lutfen bir sayi giriniz");
scanf("%d",&sayi);

if(sayi<=0){
        printf("lutfen pozitif bir sayi giriniz");
   }
else{

for(int i=1;i<=sayi;i++){
    toplam+=i;
}
printf("girilen sayiya kadar olan toplam: %d",toplam);
}*/

