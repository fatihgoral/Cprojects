#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci {
int yas;
char ad[10];
char soyad[10];

};
int main()
{
 struct ogrenci can;
 can.yas=19;
 strcpy(can.ad,"fatih");
 strcpy(can.soyad,"goral");
 printf("%s \t %s\t %d",can.ad,can.soyad,can.yas);

    return 0;
}
