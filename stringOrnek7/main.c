#include <stdio.h>
#include <stdlib.h>
// girilen string bir ifadedeki harfler disindaki tüm karakterleri silip ekrana bastirin
int main()
{
    char yazi[100];
    char yeniyazi[100]="";
    int i;

    printf("lutfen bir yazi giriniz") ;
     fgets(yazi,sizeof(yazi),stdin);
     for(i=0;yazi[i]!='\0'){
    if((yazi[i]>='a'&& yazi[i]<='z')|| (yazi[i]>='A'&&yazi[i]<=^'Z')){
  yeniYazi[j++]=yazi[i];
    }
     }

printf("harfler disindaki tum karakterler silindikten sonra %s",yeniYazi);

    return 0;
}
