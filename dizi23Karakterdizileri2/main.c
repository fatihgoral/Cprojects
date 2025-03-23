#include <stdio.h>
#include <stdlib.h>

int main()
{
   char isim[3][10]={"arda","kenan","hakan"};
   /*
   burda ilk yazdigimiz indis olan 3 ; dizinin dýs boyutudur
   yani 3 satir(string vardir.
    burda ikinci yazdigimiz indis olan 10 ; her bir stringin uzunllugudur yani her string maksimum 9 +1(null karakteri)

   */
   printf("%s\n",isim[0]);
   printf("%s\n",isim[1]);
   printf("%s\n",isim[2]);// %s kullanmamizin sebebi isim[2] string belirtir

   printf("\n\n");
   printf("%c\n",isim[0][3]);
    printf("%c\n",isim[1][0]);
     printf("%c\n",isim[1][1]);
      printf("%c\n",isim[1][4]);
      printf("%c\n",isim[2][2]);
      printf("%c\n",isim[2][3]);



   return 0;
}
