/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("lutfen bir sayi giriniz : ");
    scanf("%d",&sayi);
    printf("girdignzi sayi : %d'dir", sayi);

    int sonuc=sayi%2;
    switch(sonuc){
 case 0: printf("\nsayiniz cift sayidir");
    break ;
 case 1 : printf("\nsayiniz tek sayidir");
     break;
    }
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("lutfen bir sayi giriniz : ");
    scanf("%d",&sayi);
    printf("girdignzi sayi : %d'dir", sayi);


 switch(sayi%2){
 case 0: printf("\nsayiniz cift sayidir");
    break ;
 case 1 : printf("\nsayiniz tek sayidir");
     break;
    }
    return 0;
}
