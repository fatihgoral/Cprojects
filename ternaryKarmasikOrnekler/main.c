#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*



    int number = 75;
    const char *category = (number < 0) ? "Negatif" :
                           (number == 0) ? "Sýfýr" :
                           (number > 0 && number <= 10) ? "0 ile 10 arasýnda" :
                           (number > 10 && number <= 50) ? "10 ile 50 arasýnda" :
                           "50'den büyük";

    printf("Sayý kategorisi: %s\n", category);

}
*/

/*
int yas;
printf("lutfen yas giriniz : ");
scanf("%d",&yas);
const char *YasDurumu= (yas>=65)? "yasli":
                        (yas<65&&yas>=40)? "yetiskin":
                            (yas<40 && yas>=18) ?"genc" :
                                (yas<18&&yas>12)? "ergen":
                                     "cocuk";
                                        printf("yas grubu : %s",YasDurumu );

*/



/*

    int grade = 72;
    int passStatus = (grade >= 90) ? 4 :
                     (grade >= 80) ? 3 :
                     (grade >= 70) ? 2 :
                     (grade >= 60) ? 1 :
                     0;

    printf("Geçme Durumu: %d\n", passStatus);


*/

/*
char *isik="mavi";
char *trafikdurum=(isik=="kirmizi")? "dur":
                (isik=="sari")?"hazirol":
                    (isik=="yesil")? "gec":
                        "gecersiz bir renk girdiniz trafik durum anlami yok";
                        printf("%s lamba renginin trafik durumu anlami : %s",isik,trafikdurum);

*/


/*
int temperature = 7;
    const char *weather = (temperature < 0) ? "Dondurucu" :
                          (temperature >= 0 && temperature < 10) ? "Soguk" :
                          (temperature >= 10 && temperature < 20) ? "ilik" :
                          (temperature >= 20 && temperature < 30) ? "Sicak" :
                          "Çok Sıcak";

    printf("Sicaklik durumu: %s\n", weather);


*/



    int quantity = 15;
    int discount = (quantity > 20) ? 20 :
                   (quantity > 10) ? 15 :
                   (quantity > 5) ? 10 :
                   5;

    printf("İndirim: %d%%\n", discount);



    return 0;
}
