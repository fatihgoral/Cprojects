#include <stdio.h>
#include <stdlib.h>
// kullanici tarafindan girilen bir cumlenin bilgi.txt dosyasina N defa alt alta yazilmasini saglayan c programini yaziniz
int main()
{
    int satir;
    int i;
   FILE *dosya;
   char cumle[30];
  dosya=fopen("yaz.txt","w");


  if(dosya!=NULL){
      printf("lutfen cumle giriniz: ");
      gets(cumle);
      printf("lutfen satir sayisini giriniz: ");
      scanf("%d",&satir);
    for(i=0;i<satir;i++){
        fprintf(dosya,"%d. cumle : %s\n",i,cumle);
    }
    }

  else{
    printf("dosya olusturulamadi");
  }
fclose(dosya);
printf("doyaya yazma islemi yapildi");
    return 0;
}
