#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE* fptr;
   char data[100];
   fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\datakutu.txt","a");
  if(fptr==NULL){
    printf("file open unsuccesful");
  }else{
fputs("\n New world order",fptr);
  }

  fclose(fptr);
    return 0;
}
