#include <stdio.h>
#include <stdlib.h>

// pointer kullanarak ciftmi fonksiyonu
int ciftmi(int *sayi){
    if(*sayi % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

// pointer kullanarak ucile fonksiyonu
int ucile(int *sayi){
    if(*sayi % 3 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int n;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &n);

    if(ciftmi(&n) == 1 && ucile(&n) == 1){
        printf("Sayi 6 ile tam bolunuyor\n");
    }
    else if(ciftmi(&n) == 1){
        printf("Sayi cifttir\n");
    }
    else if(ucile(&n) == 1){
        printf("Sayi 3 ile tam bolunebilir\n");
    }
    else {
        printf("Sayi ne cift ne de 3 ile bolunebilir\n");
    }

    return 0;
}
