#include <stdio.h>
#include <stdlib.h>

int main()
{
    // iki boyutlu karakter dizileri, her bir satirinda
    // string (karakter dizisi) saklayan dizilerdir.


printf("Baþlangýç\n");

char isim[6] = "fatih";
char isim1[] = "fatih";
char *isim2 = "fatih";
char isim3[] = {'f', 'a', 't', 'i', 'h', '\0'};

printf("Ýsimler tanýmlandý\n");
printf("%s\n", isim);
printf("%s\n", isim1);
printf("%s\n", isim2);
printf("%s\n", isim3);

printf("*************************************\n\n");

char diziler[3][40] = {"ezel", "Leyla ile Mecnun", "kurtlar vadisi"};
printf("Diziler tanýmlandý\n");
for(int i = 0; i < 3; i++){
    printf("%s\n", diziler[i]);
}

printf("Son\n");

return 0;
