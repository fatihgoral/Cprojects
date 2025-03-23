#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
FILE *fptr;
fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\data.txt.txt","w");
char name='F';
char name2='G';
if(fptr==NULL){
    printf("dosya acma islemi basarisiz\n");
}
  else{
putc(name,fptr);
putc('\n',fptr);
putc(name,fptr);
putc('\n',fptr);
putc(name2,fptr);
putc('M',fptr);
putc('\n',fptr);
putc('N',fptr);
putc('\n',fptr);
putc('C',fptr);
putc('\n',fptr);
    printf("veri dosyaya yazdirildi\n");
  }

   fclose(fptr);
    return 0;
}
