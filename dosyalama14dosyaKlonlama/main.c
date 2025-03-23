#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fptr *fptrcpy;
  fptr=fopen("Data.txt","r");
  ftrcpopy=fopen("datacopy.txt","w");
  if(fptr==NULL){
    printf("data.txt open unsuccesful!\n");
  }



    fclose(fptr);
    fclose(fptrcopy);
    return 0;
}
