#include <stdio.h>
#include <stdlib.h>

int main()
{
// dosyayi okumak icin once klasör icinde metin belgesi olusturup icine yazi yazmamiz gerekir
/*
FILE *dosya;
char karakter;
dosya=fopen("deneme.txt","r");
if(dosya!=NULL){
    karakter=fgetc(dosya);
    printf("%c",karakter);
}else{
printf("dosya bulunmadi");
}
*/


/*
    FILE *dosya;
    char k1[10], k2[10];
    int sayi;

    // Dosyayı açmaya çalış
    if ((dosya = fopen("deneme.txt", "r")) != NULL) {
        // Dosyadan verileri oku
        fscanf(dosya, "%s", k1);  // k1 için adres gerekmez
        fscanf(dosya, "%s", k2);  // k2 bir string olduğu için %s kullanımı doğru
        fscanf(dosya, "%d", &sayi); // sayi bir int olduğu için %d ile adres kullanılır

        // Dosyadan okunan verileri ekrana yazdır
        printf("Dosyadan okunanlar: %s %s %d\n", k1, k2, sayi);

        // Dosyayı kapat
        fclose(dosya);
    } else {
        // Dosya açılamazsa hata mesajı göster
        printf("Dosya bulunamadi.\n");
    }


}
*/
 FILE *dosya;
 char kelime[50][20];
 int i=0;
 if((dosya=fopen("kDizim.txt","r"))!=NULL){
 while(!feof(dosya)){
    fscanf(dosya,"%s",&kelime[i]);
      printf("%s ",kelime[i]);
      i++;
 }

 }else{
 printf("dosya bulunamadi ");
 }
 fclose(dosya);



    return 0;
}
