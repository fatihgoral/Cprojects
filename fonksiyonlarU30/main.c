#include <stdio.h>
#include <stdlib.h>

    double karekokbul(double N)
    {
        double karekok;
        int i;
        if(N>0.0)
        {
            karekok=N/2;
            for(i=0;i<50;i++)
            {
                karekok=((karekok*karekok)+N)/(2*karekok);
            }
            return karekok;
        }
        else if(N==0)
        {
            return 0;
        }
        else
        {
            printf("Lutfen gecerli bir deger giriniz\n");
        }

    }


int main()
{
   /* Kullan�c� taraf�ndan girilen bir N pozitif tamsay�s�n�n karek�k�n�n bulunmas�n�
    sa�layan(sqrt() kullanmadan) C program�n� fonksiyon kullanarak yaz�n�z (A:Girilen Say�)

    K=A/2
    Karek�k=Toplam 1 den 50 ye kadar K^2+A/2K*/

    double sayi;
    printf("Karekoku bulanacak sayi\n");
    scanf("%lf",&sayi);
    printf("%lf karekoku = %.5lf \n",sayi,karekokbul(sayi));
    return 0;
}

