#include <stdio.h>
#include <stdlib.h>
/*
struct: Her uye icin ayri bellek alani ayrilir.

union: Tum uyeler ortak bir bellek alanini paylasir ve bellek boyutu en buyuk uyenin boyutu kadardir.

Kullanim Amaci:

struct: Farkli turdeki verileri ayni anda saklamak icin kullanilir.
union: Ayný bellek alaninda farkli turde verileri saklamak icin kullanilir, ancak sadece bir tur veriyi ayni anda saklayabilir.
Bellek Buyuklugu:

struct: Bellek buyuklugu, tum uyelerin toplamina esittir.
union: Bellek buyuklugu, en buyuk uyenin buyuklugu kadar olur.
*/

union test
{
char a;
int x;
float y;
};

int main()
{
   union test t;
   t.x=2;
   printf("%d\n",t.x);
   printf("union imizin tuttugu alan %d byte dir",sizeof(t)) ;
    return 0;
}
