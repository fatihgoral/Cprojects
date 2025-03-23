#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
strcmp(string1,string2)==0; // her iki karakter dizisi de birbirine esittir
strcmp(string1,string2)<0 // s1, s2'den önce gelir alfabetik olarak
strcmp(string1,string2)>0 // s1, s2'den sonra gelir alfabetik olarak
*/

char takim[]= "galatasaray" ;
char tahmin[20];
printf("Turkiyenin en basarili spor kulubu hangisidir ? lutfen cevabi giriniz:\n");
scanf("%s",&tahmin);
if(strcmp(takim,tahmin)==0){
    printf("tebrikler %s cevabiniz dogru :))",tahmin);
}else{
printf("maalesef %s diyerek yanlis cevap verdiniz.",tahmin);
}




    return 0;
}
