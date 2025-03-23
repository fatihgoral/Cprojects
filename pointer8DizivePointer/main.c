#include <stdio.h>
#include <stdlib.h>

int main()
{
char harfler[7]={'a','b','c','d','e','f','x'};
printf("ilk elemanin adres:%x\n",&harfler[0]);
printf("ilk elemanin adres:%x\n",harfler);

printf("ikinci elemanin adres:%x\n",&harfler[1]);
printf("ikinci elemanin adres:%x\n",harfler+1);

printf("ucuncu elemanin adres:%x\n",&harfler[2]);
printf("ucuncu elemanin adres:%x\n",harfler+2);

printf("ilk elemanin degeri:%x\n",harfler[0]);
printf("ilk elemanin degeri:%x\n",*harfler);

printf("ikinci elemanin degeri%x\n",harfler[1]);
printf("ikinci elemanin degeri:%x\n",*(harfler+1));


printf("ucuncu elemanin degeri%x\n",harfler[2]);
printf("ucuncu elemanin degeri:%x\n",*(harfler+2));

    return 0;
}
