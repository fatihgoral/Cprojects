#include <stdio.h>
#include <stdlib.h>

void ucgenc(int n)
{
    int i,j;
    int bosluksayisi=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=bosluksayisi;j++)
        {
            printf(" ");
        }
        bosluksayisi--;
        for(j=1;j<=2*i-1;j++)
        {
            printf("c");
        }
        printf("\n");
    }

}
void ucgenplus(int n)
{
    int bosluksayisi=1;
    int i,j;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=bosluksayisi;j++)
        {
            printf(" ");
        }
        bosluksayisi++;
        for(j=1;j<=2*(n-i)-1;j++)
        {
            printf("+");
        }
        printf("\n");
    }


}

int main()
{
   /* A�a��da verilen ekran g�r�nt�s�n�n elde edilmesini sa�layan C program�n� fonksiyon/fonksiyonlar kullanarak
    yaz�n�z

    Satir sayisini giriniz:4
            c
           ccc
          ccccc
         ccccccc
          +++++
           +++
            +*/

    int satir;
    printf("Lutfen satir sayisini giriniz\n");
    scanf("%d",&satir);
    ucgenc(satir);
    ucgenplus(satir);


    return 0;
}
