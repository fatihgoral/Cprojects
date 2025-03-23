#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    printf("lutfen isminizi giriniz:\n");
    gets(name);
    printf("%s",name);
    char surname[40];
    printf("lutfen soyadinizi giriniz");
    fgets(name,sizeof(name),stdin); // daha guvenilir bir yontem
    printf("%s",name);
    return 0;
}


