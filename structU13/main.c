#include <stdio.h>
#include <stdlib.h>


    /*Karmaþýk bir sayý a+ib þeklinde olup a deðeri sayýnýn gerçel kýsmýný;b deðeri ise sanal
    kýsmýný oluþturur.Bir karmaþýk sayýyý gerçel ve sanal kýsýmdan oluþan bir yapý
    olarak tanýmlayýnýz.Daha sonra iki karmaþýk sayýyý ve toplama çýkarma operatörünü
    girdi olarak alýnýz.Toplama ya da çýkarma iþlemini yaparak sonucu bu yapýda tanýmlanmýþ bir baþka
    deðiþkende saklayýnýz ve ekranda görüntüleyiniz.


    Örnek çýktý

    Birinci karmaik sayi:2.0 3.0
    Ikýncý karmasik sayi:5.0 -4.5
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





