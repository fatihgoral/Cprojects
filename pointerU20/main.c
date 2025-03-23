#include <stdio.h>
#include <stdlib.h>
// kullalnicinin girdigi karakter dizisinin kac karakter poldugunu ekrsana yazan c kodunu yaziniz
int main()
{
    char kelime[100];
    char *ptr=kelime;

    printf("lutfen bir karakter dizisi giriniz: ");
   gets(kelime);
  int boy=strlen(ptr);
    printf("girilen kelþmenin boyu:%d",boy);





    return 0;
}
