#include <stdio.h>
#include <stdlib.h>
/*
asagida verilen yapi kullanarak N adet ogrencinin ders notlari bilgisinþ ve ortalamasini hesaplayarak dersler.txt dosyasina yazan c programini yazinþz
vize1: %20
vize2:%20
final %60;

struct ogrenci{
char adsoyad[30];
char ders[20];
int vize1ivize2,finalNotu;

*/

struct ogrenci{
char adsoyad[30];
char ders[20];
int vize1 ,vize2 ,finalNotu;
};

int main()
{
FILE *dosya;
int N,i;
float ort;

printf("lutfen ogrenci sayisini giriniz");
scanf("%d",&N);
struct ogrenci ogr[N];
dosya=fopen("dersler.txt","w");
if(dosya==NULL){
    printf("dosya olusturalamadi");
}
else{

    for(i=0;i<N;i++){
        fflush(stdin);
        printf("ad soyad:");
        gets(ogr[i].adsoyad);
        printf("ders: ");
        gets(ogr[i].ders);
        printf("vize1");
        scanf("%d",&ogr[i].vize1);
        printf("vize 2:");
        scanf("%d",&ogr[i].vize2);
        printf("finalNotu:");
        scanf("%d",&ogr[i].finalNotu);
        ort=(float)ogr[i].vize1*0.2+ (float)ogr[i].vize2*0.2+(float)ogr[i].finalNotu*0.6;
        fprintf(dosya,"%s\t %s\t %d\t %d\t %d\t %.2f ",ogr[i].adsoyad,ogr[i].ders,ogr[i].vize1,ogr[i].vize2,ogr[i].finalNotu,ort);

    }
    fclose(dosya);
}




    printf("Öðrenci bilgileri baþarýyla dosyaya yazýldý.\n");

    return 0;
}

