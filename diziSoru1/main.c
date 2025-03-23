#include <stdio.h>
#include <stdlib.h>
#define MAX 40
// 2 adet fonksiyon yazin
// karakter dizisinin boyunu hesaplayan bir fonksiyon yazin(adresiyle cagirma yöntemini kullanin
//2 kelimenin ortak harf sayisini hesaplayan ve bunu adresle gönderen bir fonksiyon yaziniz
//kullanicidan 2 kelime girmesini isteyen daha sonra yukarýdaki fonksiyonlarý kullannarak ilk girilen karakter dizisinini
//boyunu kullanicidan 2 kelime girmesini ve 2 kelime arasinda ortak olan harf sayisini ekrana bastiran  bir C programi yazin









int main()
{
    char cumle[MAX];
    int i=0;

    do{
        scanf("%c",&cumle[i]);
        i++;
    }while(cumle[i-1]!='\n');
    cumle[i-1]=\'0';
    boy(cumle,&a)
    return 0;
}
