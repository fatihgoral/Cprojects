#include <stdio.h>
#include <stdlib.h>

   //hem strrev hem de dongu ile stringin tersini yazdirma
int main()
{


  /*  char metin[20];
    printf("dongu yardimiyla manuel olarak  ters yazdirma\n");
    printf("lutfen string ifadeyi giriniz : ");
    scanf("%s",&metin);
   int length=strlen(metin);
    for(int i=length;i>=0;i--){
        printf("%c",metin[i]);
    }
*/
   printf("\n************************************\n\n") ;
       printf("strrev fonksiyon yardimiyla ters yazdirma\n");
   printf("lutfen string ifadeyi giriniz : ");
   char text[30];
    scanf("%s",&text);
  printf("%s",strrev(text));
    return 0;
}
