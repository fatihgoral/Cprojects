#include <stdio.h>
#include <stdlib.h>
/*
klavyeden girilen N adet tamsayinin bellekten yer ayrýlarak bellege yazýilmasini ve bellekten okunarak e
ekrana listelenmesini saglayan C programini yaziniz
*/

int main()
{

    int N;
     int* ptr;
    printf("lutfen kac adet sayi girmek istediginizi giriniz");
    scanf("%d",&N);
    p=(int*)malloc(n*sizeof(int));

   for(i=0;i<N;i++){
    scanf("%d",&(*(p+i)));
   }

 for(i=0;i<N;i++){
    printf("%d\n",*(p+i));
 }

    return 0;
}

