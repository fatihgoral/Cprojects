#include <stdio.h>
#include <stdlib.h>
union ogrenci{
char isim[20};
int no;
float ort;
};


int main()
{
  printf("boyut:% ld byte\n",sizeof(union ogrenci));

union ogrenci o;
return 1;
    return 0;
}
