#include <stdio.h>
#include <stdlib.h>
/*
asagida verilen yapiyi kullanarak personel bilgilerini alinmasini ve alindiktan sonra personel adlarina gore
alfebetik olarak a dan z ye personel bilgilerinin listelenmesinþ saglayan c programini yaziniz
*/
typedef struct personel{
int sifre;
char ad[10];
char soyad[10];
int yas;
float maas;
char cinsiyet[10];
}kisiler;

void sirala(kisiler x[],int m){
int i,j;
kisiler degisken;
for(i=0;i<m-1;i++){
    for(j=i+1;j<m;j++){
        if(strcmp(x[i].ad,x[j].ad)>0){
            degisken=x[i];
            x[i]=x[j];
            x[j]=degisken;
        }

    }

    }
    }

  void listele(kisiler x[],int m){
  int i;
  for(i=0;i<m;i++)
    printf(" %d %s %s %d %f %s\n",x[i].sifre,x[i].ad,x[i].soyad,x[i].yas,x[i].maas,x[i].cinsiyet);
  }






int main()
{

 int N;
 int i;
 printf("kac adet personel girilecek: ") ;
 scanf("%d",&N);
 getchar();
  kisiler p[N];
  for(i=0;i<N;i++){
    printf("adi gir:");
    gets(p[i].ad);
    printf("soyadi giriniz");
    gets(p[i].soyad);
    printf("yasi giriniz");
    scanf("%d",&p[i].yas);
    getchar();
    printf("maasi giriniz");
    scanf("%f",&p[i].maas);
    getchar();
    printf("cinsiyetini giriniz");
    gets(p[i].cinsiyet);
  }

sirala(p,N);
listele(p,N);

    return 0;
}
