#include <stdio.h>
#include <stdlib.h>
/* kullanici tarafindan N elemanli diziye alinan tamsayilarin ortalamasinin bulunmasini saglayan c programi
*/

float ortalamabul(int *dizim,int boyut){
    int i;
    int toplam=0;
    for(i=0;i<boyut;i++){
        toplam+=dizim[i];
    }

    toplam = (float)toplam / boyut;

    return toplam;

}

int main()
{
    int n;
printf("kac elemanli bir dizi araniyor ");
scanf("%d",&n);
int dizim[n];
for(int i=0;i<n;i++){
    printf("%d. elemani giriniz",i+1);
    scanf("%d",&dizim[i]);
}
int ort=ortalamabul(dizim,n);
printf("ortalama sonucu :%d",ort);




    return 0;
}
