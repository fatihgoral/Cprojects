#include <stdio.h>
#include <stdlib.h>

int main()
{
char letter;
printf("enter a letter please...");
scanf("%c",&letter);
switch(letter){
   case 'a':
   case 'e':
   case 'u':
   case 'o':
   case 'i':printf("%c is a vowel",letter); break ;// burda üstteki5 durum da ayný oldugu icin break tek kullanabiliriz.
   default: printf("%c is a consonant\n",letter);//  break görene kadar calýsacagi icin sürekli break yazmaktan kurtulduk.
   printf("or  not a letter\n");

}
    return 0;
}
