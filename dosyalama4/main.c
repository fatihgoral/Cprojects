#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\data.txt.txt","w");
   if(fptr==NULL){
     printf("file open succesful");
   }else{
   fputs("I love C programming",fptr);
   fputs(" c programming language is interesting",fptr);
   printf("data was written to FILE succesfly");
   }
    fclose(fptr);

    return 0;
}
