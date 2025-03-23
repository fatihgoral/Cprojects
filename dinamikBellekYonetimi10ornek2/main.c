#include <stdio.h>
#include <stdlib.h>
/*
bilgisayar tarafýndan rastgele uretilen N adet tamsayýyý bellege yazan ve bellekten okuyarak
karalerini ekrana listeleyen bir C programini yaziniz
*/
int main()
{
    int* ptr,i,N;
   printf("kac adet sayi girmek istiyorsunuz: ");
   scanf("%d",&N);
   ptr=(int*)malloc(N*sizeof(int));
   srand(time(0));
  printf("URETILEN SAYILAR \n");
   for(i=0;i<N;i++){
    *(ptr+i)=rand()%100;
    printf("%3d\n",*(ptr+i));
   }
   printf("\n\n");
   printf("KARELERÝ");
   printf("\n");
   for(i=0;i<N;i++){
    printf("%3d\n",(*(ptr+i))*(*(ptr+i)));
   }
    return 0;
}
