#include <stdio.h>
#include <stdlib.h>


    /*Karma��k bir say� a+ib �eklinde olup a de�eri say�n�n ger�el k�sm�n�;b de�eri ise sanal
    k�sm�n� olu�turur.Bir karma��k say�y� ger�el ve sanal k�s�mdan olu�an bir yap�
    olarak tan�mlay�n�z.Daha sonra iki karma��k say�y� ve toplama ��karma operat�r�n�
    girdi olarak al�n�z.Toplama ya da ��karma i�lemini yaparak sonucu bu yap�da tan�mlanm�� bir ba�ka
    de�i�kende saklay�n�z ve ekranda g�r�nt�leyiniz.


    �rnek ��kt�

    Birinci karmaik sayi:2.0 3.0
    Ik�nc� karmasik sayi:5.0 -4.5
    Operator(+/-):+
    Sonuc:7.00-1.50i*/

    struct karmasiksayi
    {
        float a,b;
    };


    int main()
    {
        struct karmasiksayi sayi1,sayi2,sonuc;
        char oper;

        printf("Lutfen yapmak istediginiz islemi giriniz\n");
        scanf("%c",&oper);

        printf("Birinci karmasik sayi\n");
        scanf("%f%f",&sayi1.a,&sayi1.b);

        printf("Ikinci karmasik sayi\n");
        scanf("%f%f",&sayi2.a,&sayi2.b);

        if(oper=='+')
        {
            sonuc.a=sayi1.a+sayi2.a;
            sonuc.b=sayi1.b+sayi2.b;
        }
        else if(oper=='-')
        {
            sonuc.a=sayi1.a-sayi2.a;
            sonuc.b=sayi1.b-sayi2.b;
        }
        else{
            printf("Lutfen dogru durust bir operator giriniz");
        }

        printf("Sonuc:\n");
        printf("%.2f ",sonuc.a);

        if(sonuc.b>0){
            printf(" + %.2f i",sonuc.b);
        }
        else{
            printf("%.2f i",sonuc.b);
        }

         return 0;
    }





