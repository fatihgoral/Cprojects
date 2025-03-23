#include <stdio.h>
#include <stdlib.h>
// kullanicidan n tane sayi aliniz ve bunlardan ortalamasini bulunuz
// girdiginiz n degerinin 0 ile 100 arasinda olmasina dikkat ediniz

int main()
{
    int n,i;
    int dizi[100];
   printf("kac tane sayi gireceksiniz: ");
   scanf("%d",&n);
   if(n>0&&n<100){
   for(i=0;i<n;i++){
    printf("%d. sayiyi giriniz: ", i + 1);
   scanf("%d",&dizi[i]);
   }
int toplam=0;
   for(i=0;i<n;i++){
  toplam+=dizi[i];
   }
   float ortalama=(float)toplam/n;
   printf("toplam : %d\n",toplam);
  printf("ortalama : %.2f\n", ortalama);
   }
   else{
    printf("lutfen istenen aralikta sayi giriniz");
   }



    return 0;
}
/*
// AYNI SORUYU DINAMIK BELLEK YONETIMI KULLANARAK COZUMU

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Kac tane sayi gireceksiniz (1-99 arasi): ");
    scanf("%d", &n);

    // Girilen sayýnýn 0-100 aralýðýnda olup olmadýðýný kontrol et
    if (n > 0 && n < 100) {
        int *dizi = (int *)malloc(n * sizeof(int)); // dinamik bellek ayýrma

        // Kullanýcýdan sayýlarý al
        for (i = 0; i < n; i++) {
            printf("%d. sayiyi giriniz: ", i + 1);
            scanf("%d", &dizi[i]);
        }

        // Sayýlarýn toplamýný ve ortalamasýný hesapla
        int toplam = 0;
        for (i = 0; i < n; i++) {
            toplam += dizi[i];
        }
        float ortalama = (float)toplam / n;

        // Sonuçlarý ekrana yazdýr
        printf("Toplam: %d\n", toplam);
        printf("Ortalama: %.2f\n", ortalama);

        free(dizi); // dinamik belleði serbest býrakma
    } else {
        printf("Lutfen 0 ile 100 arasinda bir sayi giriniz.\n");
    }

    return 0;
}
*/

