#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE* fptr;
   char data[100];
   fptr=fopen("C:\\ckodlari\\dosyalamaYeni13\\data.txt","r");
  if(fptr==NULL){
   printf("file operation unsuccesful!\n");
   }else{
       printf("konum gostergeci yeri:%d\n",ftell(fptr));
       fseek(fptr,50,SEEK_SET);
       printf("konum göstergeci yeri :%d\n",ftell(fptr));
       fgets(data,100,fptr);
       printf("%s\n",data);
       printf("konum göstergeci yeri:%d\n",ftell(fptr));
       rewind(fptr);
       printf("konum gostergeci yeri :%d",ftell(fptr));
       fgets(data,100,fptr);
       printf("%s\n",data);
   }
   fclose(fptr);
    return 0;
}
