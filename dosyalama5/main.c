#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    int i=7;
    fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\data.txt.txt","w");
   if(fptr==NULL){
     printf("file open succesful");
   }else{
   fprintf(fptr,"I love C programming: %d ",i);//fprintf ile degiskenleri de yazabilme imkanýmýz oldu
   fputs(" c programming language is interesting",fptr);
   printf("data was written to FILE succesfly");
   }
    fclose(fptr);

    return 0;
}
