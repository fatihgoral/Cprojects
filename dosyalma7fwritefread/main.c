#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
   int numbers[7];
   int i;
    fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\data.txt.txt","w");
   if(fptr==NULL){
     printf("file open succesful\n");
   }else{
  printf("enter 7 numbers ");
  for(i=0;i<7;i++){
    scanf("%d",&numbers[i]);
  }
  fwrite(numbers,sizeof(int),7,fptr);
  printf("data was written to file succesfully\n");
   }
    fclose(fptr);

    return 0;
}

