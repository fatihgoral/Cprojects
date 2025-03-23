#include <stdio.h>
#include <stdlib.h>
/*
kullanici tarafindan girilen bir kelimenin karakterlerinin asagidaki sekildeki gibi ekranda gösteren c programini yaziniz
k
k e
k  e l
k  e  l i
k  e  l  i m
k  e  l  i  m e


*/
int main()
{
    int i=0,j=0;
    char* kelime;
    kelime=(char*)malloc(50*sizeof(char));
    printf("lutfen kelime giriniz\n");
    gets(kelime);
    while(i<strlen(kelime)){
            j=0;
        while(j<=i){
            printf("%c ",*(kelime+j));
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
