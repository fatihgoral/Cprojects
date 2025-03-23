#include <stdio.h>
#include <stdlib.h>
// bilgi.txt dosyasindabazi bilgilerin oldugu varsayilmaktadir.buna gore girilen cumlenin karakter karakter bilgi.txt dosyasina eklenmesini saglayan c kodunu yaziniz

int main()
{
    int i;
   FILE *dosya;
   char cumle[10];
   dosya=fopen("bilgi.txt","a");

   if(dosya==NULL){
    printf("dosya bulunamadi");
   }
   else{
    printf("lutfen bir cumle giriniz: ");
     gets(cumle);
     for(i=0;cumle[i];i++){
        putc(cumle[i],dosya);
     }
     putc("\n",dosya);
     }

   printf("basarili sekilde bilgiler dosyaya eklendi ");

   fclose(dosya);
    return 0;
}
