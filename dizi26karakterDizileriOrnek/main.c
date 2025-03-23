#include <stdio.h>
#include <stdlib.h>
int main()
{
    char calisanlar[2][3][10];
    int maas[2][3], urun[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d. sirketteki %d. elemanin adi : ", i + 1, j + 1);
            scanf("%s", calisanlar[i][j]);
            printf("%d. sirketteki %d. elemanin maasi : ", i + 1, j + 1);
            scanf("%d", &maas[i][j]);
            printf("%d. sirketteki %d. elemanin sattigi urun : ", i + 1, j + 1);
            scanf("%d", &urun[i][j]);

            // 1 ile 5 arasındaki ürünler için 5 TL, 6 ile 10 arasındaki ürünler için 10 TL ek ödeme
            if (urun[i][j] >= 1 && urun[i][j] <= 5)
            {
                maas[i][j] += urun[i][j] * 5;
            }
            else if (urun[i][j] >= 6 && urun[i][j] <= 10)
            {
                maas[i][j] += urun[i][j] * 10;
            }
        }
    }

    printf("************************\n");

    for (int i = 0; i < 2; i++)
    {
        printf("\n %d. sirketteki eleman bilgileri \n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("%s nin maasi = %d\n", calisanlar[i][j], maas[i][j]);
        }
    }

    return 0;
}
