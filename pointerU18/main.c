#include <stdio.h>
#include <stdlib.h>
// 0 dan 14 e kadar olan egerleri dixide tanýmlayýn
// dizinin icindeki cift elemanlari bastirin
// dizinin icindeki tek elemanlari bastirin
// ve bu kodu pointer kullanrak yaziniz

void calcul(int *ptr){
    int i;
    printf("tum sayilar: ");
    for (i=0;i<15;i++){
        printf("%3d",*(ptr+i));
    }
printf("\n");

    printf("cift sayilar: ");
for(i=0;i<15;i++){
    if(*(ptr+i)%2==0){
        printf("%3d",*(ptr+i));
    }
}
printf("\n");
printf("tek sayilar: ");
for(i=0;i<15;i++){
    if(*(ptr+i)%2==1){
        printf("%3d",*(ptr+i));
    }
}
}

int main()
{

    int dizi[15];
    for(int i=0;i<15;i++)
{
    dizi[i]=i;
}
int *ptr=dizi;

calcul(ptr);

   return 0;
}
