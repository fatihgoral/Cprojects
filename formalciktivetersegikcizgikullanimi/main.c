#include <stdio.h>
#include <stdlib.h>

int main()
{
    // formal kullanimda ifadeyi yazarken kolonda ne kadar yer kaplar onu bulur
    printf("%d\n",33);
    printf("%4d\n",33);
    printf("%2d\n",33);
    printf("%10d\n",33);
    printf("%7d\n",33);
    printf("%4c\n",'M');
    printf("%3s\n","merhaba");
    printf("%5.4f\n",12.334509857);
    printf("%8.2f\n",34.8967); // son basamaktaki kisim yuvarlanir
    printf("%8.3f\n",23.4567);// son basamaktaki kisim yuvarlanir
    printf("%.3f\n",23.4567); // son basamaktaki kisim yuvarlanir

printf("****************************************\n");
// yer belirtecinin onune sifir veya - gelmesi durumu;
int sayi=44;
printf("%-12d\n",sayi);
printf("%012d\n",sayi);

printf("****************************************\n");

// ter egik cizgi karakter sabitleri
printf("%s\b%s\n","merhaba","nasilsin");
//  /b ifadesi geriye dogru bir bosluk kayar
// burada da 1 bosluk kaydi ve nasilsini a yý silerek yazdi...
printf("%s\t\t\t%s\n,", "merhaba","nasilsin");
// tab büyük bosluk birakir....

printf("****************************************\n");

printf("\n%s\\%s","merhaba","dunya");
printf("\n%s\"%s", "merhaba","nasilsin");
printf("\n%s\%%%s","merhaba","nasilsin");
printf("\nmerhaba\"nasilsin\"");

printf("****************************************\n");

printf("%\s\r%s","merhaba","deniz");



    return 0;
}
