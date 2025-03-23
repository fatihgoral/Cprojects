#include <stdio.h>
#include <stdlib.h>
// girilen sayinin asal olup olmadigi kontrolü

int main()
{
    int sayi,i;
    int asalmi=1;// flag variable(bayrak degisken)
    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    if(sayi<2){
        asalmi=0;
    }
else{
    for (i = 2; i <= sayi / 2; i++) {
        if(sayi%i==0){
            asalmi=0;
            break;
        }
    }
}
if(asalmi){
    printf("girdiginiz sayi asaldir");
}else{
printf ("girdiginiz sayi asal degildir");
}

    return 0;
}
