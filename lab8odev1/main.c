#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;

    char kelime[50];
   printf("lutfen kelime giriniz :");

scanf("%s",&kelime);
int palindrom=1;
   int uzunluk=strlen(kelime);
   printf("kelimenin uzunlugu: %d\n",uzunluk);

   strrev(kelime);
   printf("kelimenin tersi : %s\n",kelime);

  for(i=0;i<strlen(kelime)/2;i++){
    if(kelime[i]!=kelime[uzunluk-1-i]){
        palindrom=0;
        break;
    }
}
 if(palindrom==1){
    printf("polindrom mu? Evet\n");
  }
    else{
        printf("polindrom mu ? Hayýr\n");
    }
   strcat(kelime,kelime);
   printf("birlestirilmis kelime:%s\n",kelime);

  char source[20];
  char destination[20];
  strcpy(destination,kelime);  // destinationa dogrudan atama yapýlmaz
  strcpy(source,destination);
  printf("kopyalanmis hali:%s\n",source);



    return 0;
}






