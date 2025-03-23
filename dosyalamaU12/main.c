#include <stdio.h>
#include <stdlib.h>
// kullanici tarafindan girilen pozitif bir N tamsayisina kadar olan tek ve cift sahilari tekcift.txt dosyasina yazilmasini ve dosyadan okunraka
// ekrana gosterilmesini saglayan c programini yaziniz
int main()
{
    int sayi;
    int i;
    FILE *dosya;
    char karakter;
   dosya=fopen("tekcift.txt","w");
   if(dosya==NULL){
    printf("dosya olusturulamadi");
   }
   else{
    printf("lutfen bir sayi giriniz");
    scanf("%d",&sayi);
    for(i=1;i<sayi;i++){
            if(i%2==0){
              fprintf(dosya,"%d= cift sayi\n",i);
            }
            else{
                fprintf(dosya,"%d= tek sayi\n",i);
            }
    }
   }
   fclose(dosya);
   printf("DOSYAYA YAZMA ISLEMI GERCEKLESTIRILDI\n");
   printf("DOSYA OKUNUYORR\n");
   dosya=fopen("tekcift.txt","r");
   // alltta yapilan islem yazilmis dosyadan sayilari okumak ve konsolaa yazmaktir
   do{
     karakter=getc(dosya);
     if(karakter!=EOF){
        putchar(karakter);
     }
     }while(karakter!=EOF);
    fclose(dosya);



    return 0;
}
