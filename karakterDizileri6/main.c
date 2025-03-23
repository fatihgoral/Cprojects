#include <stdio.h>
#include <stdlib.h>

int main()
{
   char can[]="benim adim can boz";
   char canan[100]=" ";
   strncpy(canan,can,7);
   printf("%s",canan);
    return 0;
}
