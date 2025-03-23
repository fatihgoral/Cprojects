#include <stdio.h>
#include <stdlib.h>

/*ilk struct egzersiniz tekrar yaziniz . bu programda ilk önce yarismaya katilan yarismaci sayisini n,
yarismacilarin adi soyadi ve hakemlerin degerlendirme puanlarini tanimlayacaginiz bir yapi dizisine giriniz
daha sonra her yarismaci performans puanini yukarda yazilmis fonksiyonu kullanarak
hesaplayiniz. son olarak yapi dizsini taratarak birinci gelen yarismaciyi bulunuz
*/

struct yarismaciTip{
char isim[10],soyad[10];
float puan[10],performans;
};
float puanHesap(struct yarismaciTip pat)
{

int i;
float sonuc=0;
float max=0.0;
float min=6.0;

for(i=0;i<10;i++){

    if(pat.puan[i]>max){
        max=pat.puan[i];
    }
    if(pat.puan[i]<min){
        min=pat.puan[i];
    }
    sonuc+=(sonuc-max-min)/8;
}
}
struct yarismaciTip patenci[100];
int main()
{
int n;
int i,j;
float max=0.0;
int birinci=0.0;
/*
Baslangic Degeri: birinci degiskenini 0 olarak baslatmamizin nedeni,
baslangicta en yuksek performansa sahip yarismaciyi bulmak icin bir referans noktasi saglamaktir.
Baslangicta ilk yarismaciyi en yuksek performansa sahip olarak kabul edebiliriz.
*/
printf("lutfen yarismaci sayisini giriniz\n");
scanf("%d",&n);
for(j=0;j<n;j++)
{
    printf("patencinin adini giriniz\n");
    scanf("%s",&patenci[j].isim);

    printf("lutfen yarismacinin soyadini giriniz\n ");
    scanf("%s",patenci[j].soyad);

    printf("hakem puani: \n\n");
}

  for(i=0;i<10;i++){
    scanf("%f",&patenci[j].puan[i]);
  }
  patenci[j].performans=puanHesap(patenci[j]);
  printf("puan = %f",patenci[j].puan[i]);

  if(patenci[j].performans>max){
    max=patenci[j].performans;
    birinci=j;
  }
  printf("yarismanin birincisi :n");
  printf("isim: %s soyisim:%s puan:%f\n",patenci[birinci].isim,patenci[birinci].soyad,max);

    return 0;
}
