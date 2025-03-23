#include <stdio.h>
#include <stdlib.h>

int main()
{

    // bu algoritmayi anlamadim tekra bak
 char a;
 int i,j;
 int b;
 int bosluk=0;

 printf("harf gir: ");
 scanf("%c",&a);

 printf("sayi girin: ");
 scanf("%d",&b);

 for(i=1;i<=b;i++){
    for(j=1;j<=bosluk;j++){
       printf(" ");

    }
    printf("%c\n",a);
    bosluk++;
 }
 bosluk-=2;

 for(i=1;i<b;i++){
        for(j=1;j<=bosluk;j++){
            printf(" ");
        }
        printf("%c\n",a);
        bosluk--;

 }


    return 0;
}
