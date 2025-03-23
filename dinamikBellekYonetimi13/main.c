#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//bilgisayar tarafindan uretilen N adet rastgele tamsayini bellekten yer yer ayrýlarak bellege
//yazilmasini  ve bu tamsayilar icerisinden en kucugunu bulan program
int main()
{
int *p;
int N;
int i;
 printf("kac adet sayi girilecek");
 scanf("%d",&N);
 p=(int *) malloc(N*sizeof(int));
 srand(time(0));
 for(i=0;i<N;i++){
    *(p+i)=rand()%50;
 }
 for(i=0;i<N;i++){
    printf("%d  ",*(p+i));
 }
printf("\n\n");
int enk=*p;

for(i=0;i<N;i++){
   if(*(p+i)<enk){
    enk=*(p+i);
   }
}
printf("en kucuk tamsayi=%d\n",enk);
free(p);
    return 0;
}

