#include <stdio.h>
#include <stdlib.h>

int faktoriyelHesapla(int number){
    int sonuc=1;
    for(int i=1;i<=number;i++){
            sonuc*=i;
    }
    return sonuc;
}

int main()
{
    int sayi;

    printf("lutfen faktoriyelini hesaplamak istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
  int calculus=faktoriyelHesapla(sayi);

    printf("%d sayisinin faktöriyeli= %d'dir",sayi,calculus);

        return 0;
}
