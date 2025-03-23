#include <stdio.h>
#include <stdlib.h>

int main()
{

  int t, y;
 do {
 printf("Taban uzunlugunu giriniz: ");
 scanf("%d", &t);
 getchar();
 printf("%s\n", (t % 2 == 0) ? ">>Taban uzunlugu tek sayi olmali\n" : "" );
 } while (t % 2 == 0);
 y = t / 2 + 1; // piramidin yuksekligi
 for (int i = 0 ; i < y ; i++) {
   for (int j = 0 ; j < t ; j++)
     printf("%c", (j < y - i - 1 || j > y + i - 1) ? ' ' : '*' );
   printf("\n");
 }

    return 0;
}

