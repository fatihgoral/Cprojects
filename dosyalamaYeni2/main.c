#include <stdio.h>
#include <stdlib.h>
// fputs()-->dosyaya bir karakter dizisi kaydeder
//fprintf--> dosyaya bicimlendirilmis veri kaydeder

int main()
{
 FILE *dosya;
 dosya=fopen("example.txt","w");



  fclose(dosya);


    return 0;
}
