#include <stdio.h>
#include <stdlib.h>
// klavyedengirilen pozitif bir tamsayinin tek ya da cift oldugunu
// fonksiyon kullanrak bulan c programini yaziniz
void kontrol(int n){
if(n%2==0){
    printf("sayi cift sayidir");
}else {
printf("sayi tek sayidir");
}

}
int main()
{
    int sayi;
    printf("tek cift kontrolu yapilacak sayiyiy giriniz");
    scanf("%d",&sayi);
    kontrol(sayi);
    return 0;
}
