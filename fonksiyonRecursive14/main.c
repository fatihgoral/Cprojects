#include <stdio.h>
#include <stdlib.h>
// - girildiginde hata mesaj� veren program
int islem(int base, int exponent) {
    if (exponent < 0) {
        printf("Hata: Negatif us degerleri desteklenmiyor.\n");
        exit(1); // Program� hata kodu ile bitir
    }
    int result;
    if (exponent == 0) {
        return 1;
    } else {
        result = base * islem(base, exponent - 1);
    }
    return result;
}

int main() {
    int base, exponent;

    printf("L�tfen taban degerini giriniz: ");
    scanf("%d", &base);

    printf("L�tfen us de�erini giriniz: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Hata: Negatif us degerleri desteklenmiyor.\n");
        return 1; // Hata durumu ile ��k�� yap
    }

    printf("%d ussu %d'nin sonucu %d'dir\n", base, exponent, islem(base, exponent));

    return 0; // Ba�ar�yla bitir
}

/*#include <stdio.h>
#include <stdlib.h>
int islem(int base,int exponent){
 int result;
 if(exponent==0){
    return 1;
 }else{
 result=base*islem(base,exponent-1);
 }
return result;
}

int main()
{
    int base,exponent;
   printf("lutfen taban degerini giriniz:");
   scanf("%d",&base);
   printf("lutfen us degerini giriniz:");
   scanf("%d",&exponent);
   printf("%d ussu %d nin sonucu %d dir\n",base,exponent,islem(base,exponent));

    return 0;
}
*/
