#include <stdio.h>
#include <stdlib.h>
 /*Bilgisayar taraf�ndan rastgele �retilen N adet say� bir dizide tutulmaktad�r.
    Dizi i�erisinde istenilen bir de�erin dizideki s�ra numaras� girilerek ilgili s�rada bulunan dizi
    de�erinin silinmesini sa�layan C program�n� fonksiyon kullanarak yaz�n�z*/
void kayitsil(int A[],int sira,int elemansayisi)
{
    int i;
    if(sira>=elemansayisi+1)
    {
        printf("Gecerli bir sira numarasi giriniz\n");
    }
    else
    {
        for(i=sira-1;i<elemansayisi-1;i++)
        {
            A[i]=A[i+1];
        }
        printf("Kayit silindikten sonraki durum\n");
        for(i=0;i<elemansayisi-1;i++)
        {
            printf("%d\n",A[i]);
        }
    }

}
int main()
{

    int n;
    int i;
    int sirano;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0)) ;
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("\nSilinecek degerin sira numarasini giriniz\n");
    scanf("%d",&sirano);
    kayitsil(dizi,sirano,n);

    return 0;
}
