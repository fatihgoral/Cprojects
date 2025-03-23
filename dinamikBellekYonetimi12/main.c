#include <stdio.h>
#include <stdlib.h>
//kullanici tarafinda girilen N degerine kadar olan tek sayilari ve cift sayilari
//farkli bellek bolgelerinde tutan,farklý bellek bolgelerindeki bu sayilari okuyarak ekrana listeleyen C programini yaziniz

int main()
{
   int *p1,*p2;
   int N;
   int i;
   int cift=0;
   int tek=0;

   printf("bir tamsayi giriniz\n");
   scanf("%d", &N);

 p1=(int *)malloc(N*sizeof(int));
 p2=(int *)malloc(N*sizeof(int));

   for(i=0;i<N;i++){
    if(i%2==0){
        *(p1+cift)=i;
        cift++;
    }
    else{
        *(p2+tek)=i;
        tek++;
    }
   }
   printf("cift sayilar\n");
   for(i=0;i<cift;i++){
    printf("%d  ",*(p1+i));
   }
   printf("\n");
   printf("tek sayilar\n");

   for(i=0;i<tek;i++){
    printf("%d  ",*(p2+i));
   }
   free(p1);
   free(p2);
    return 0;
}
