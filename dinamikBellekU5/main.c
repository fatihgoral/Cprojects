#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen N adet tamsayının bellekten yer ayrılarak bellege yazılmasını ve bellekten okunarak
//ekrana listelenmesinş saglayamn c programini yaziniz

int main()
{
    int N;
    printf("lutfen N adet sayi giriniz");
    scanf("%d",&N);
    int i;

    int *dizi=(int*)malloc(N*sizeof(int));

    for(i=0;i<N;i++){
        printf("%d.sayi gir: ",i+1);
        scanf("%d",&(*(dizi+i)));
    }
    printf("\n");

    for(i=0;i<N;i++){
        printf("%d\n",*(dizi+i));
    }

    return 0;
}
