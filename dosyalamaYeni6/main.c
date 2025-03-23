#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *dosya;
   dosya=fopen("merhaba.txt","a");
   fputs("\nmerhaba dunya\n",dosya);
   fclose(dosya);
    return 0;
}
