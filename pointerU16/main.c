#include <stdio.h>
#include <stdlib.h>
// integer tipinde A ve B dizisinin elelman sayisini kullanicidan isteyen daha sonra
//  daha sonra kullanicidan elemanlari girmesinin isteyen bir program yaziniz
// a dizisini ekrana bastirin
// b dizisini ekrana bastirin
// b dizisini A dizisinin sonuna ekleyin

int main()
{
int aboyut,bboyut;


printf("a dizisini eleman sayisini giriniz: ");
scanf("%d",&aboyut);
printf("b dizisinin elema sayi giriniz: ");
scanf("%d",&bboyut);
int a[100],b[100],c[100];
int *pA=a,*pB=b,*pC=c;


int i;

for(i=0;i<aboyut;i++){
        printf("A[%d]: ", i);
    scanf("%d",(pA+i));
}
for(i=0;i<bboyut;i++){
    printf("B[%d]: ", i);
    scanf("%d",(pB+i));
}
  for(i=0;i<aboyut;i++){
    printf("%3d",*(pA+i));
}
printf("\n");

  for(i=0;i<bboyut;i++){
    printf("%3d",*(pB+i));
}
//a yı c ye kopyala
for(i=0;i<aboyut;i++){
    *(pC+i)=*(pA+i);
}
printf("\n");

for(i=0;i<bboyut;i++){
    *(pC+aboyut+i)=*(pB+i);
}
printf("\n");

for(i=0;i<aboyut+bboyut;i++){
    printf("%3d",*(pC+i));

}
printf("\n");





    return 0;
}
