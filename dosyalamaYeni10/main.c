#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    int i=0;
   char kelime[50][20];
     if((dosya=fopen("C:\\ckodlari\\dosyalamaYeni9\\deneme.txt","r"))!=NULL)
        {
       while(!feof(dosya))
     {
         fscanf(dosya,"%s",&kelime[i]);
         printf("%s ",kelime[i]);
         i++;
     }

     }else{
     printf("dosya bulunmadi...");
     }
    return 0;
}
