#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen N adet tamsay�n�n bellekten yer ayr�larak bellege yaz�lmas�n� ve bellekten okunarak
//ekrana listelenmesin� saglayamn c programini yaziniz

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
