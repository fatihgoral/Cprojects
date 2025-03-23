#include <stdio.h>
#include <stdlib.h>
#define N 2
/*bir eczane stoklarinda bulunan 100 farkli ilaca ait bilgileri saklamayi icermektedir
bunun icin asagida verilen yapi kullanilmaktadir. buna gore verilen yapiyi kullanarak 100 adet ilac bilgisini tutan ve ilac adetini 20 ve altinda olan ilaclarin adlarini bulmaya
yarayan programi yazmaniz beklemektedir.

*/

typedef struct{
char ilac_adi[20];
int adet;
int fiyat;
}data;

int main()
{
int i;
data veriler[N];

for(i=0;i<N;i++){
fflush(stdin);
    printf("ilac adini giriniz: ");
    gets(veriler[i].ilac_adi);

    printf("ilac adetini giriniz: ");
    scanf("%d",&veriler[i].adet);

    printf("lutfen ilacin fiyatini giriniz: ");
    scanf("%d",&veriler[i].fiyat);
}

printf("ILAC ADI:  ");
for(i=0;i<N;i++){
    if(veriler[i].adet<20){
        printf("%s\n",veriler[i].ilac_adi);
    }

}

    return 0;
}
