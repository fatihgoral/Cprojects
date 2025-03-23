#include <stdio.h>
#include <stdlib.h>
// klavyeden girilem bir kelimenin palindrom kelime yani tersten okundugu zaman ile kelþmenin kendisi ayný olan kelimer  ornegin kabak kelimes.
// pointer kullanarak yaziniz
int palindrom(char *metin){

char *baslangic=metin;
char *son=metin+strlen(metin)-1;

 while(baslangic<son){

    if(*baslangic!=*son){
        return 0;
    }
    baslangic++;
    son--;
 }
return 1;
}



int main()
{
  char kelime[100];

  printf("lutfen kelime giriniz: ");
 scanf("%s",kelime);
 if(palindrom(kelime))
{
    printf("%s bir palindromdur\n",kelime);
}
   else{
    printf("%s bir palindrom kelime degildir\n",kelime);
   }

    return 0;
}
