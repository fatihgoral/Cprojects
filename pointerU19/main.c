#include <stdio.h>
#include <stdlib.h>
int main()
{
    char kelime[100];
    char harf;
    char *ptr;

    printf("lutfen bir karakter dizisi giriniz: ");
    gets(kelime);
    printf("lutfen kaldirmak istediginiz karakteri giriniz: ");
    scanf("%c",&harf);
    ptr=kelime;

    while(*ptr){ // '/0' ile karsýlasýncaya kadar demektir

   if(*ptr==harf){
    strcpy(ptr,ptr+1);
   }
   else{
    ptr++;
   }
    }
      printf("eleme yapildiktan sonra karakter dizimizin son hali :%s",kelime);

    return 0;
}
