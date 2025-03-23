#include <stdio.h>
#include <stdlib.h>
struct info{
char* name;
int age
};
showme(struct info ogrenci){
printf("%s\n",ogrenci.name);
printf("%d",ogrenci.age);

}

int main()
{
   struct info ogrenci;
   ogrenci.name="fatih";
   ogrenci.age=19;
   showme(ogrenci);


    return 0;
}
