#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    char data[60];
   int i=7;
    fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\data.txt.txt","w");
   if(fptr==NULL){
     printf("file open succesful\n");
   }else{
  printf("enter a sentence: ");
  gets(data);
  fprintf(fptr," cumleniz : %s : %d",data,i);
  printf("data was written to file succesfully\n");
   }
    fclose(fptr);

    return 0;
}
