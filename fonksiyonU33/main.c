#include <stdio.h>
#include <stdlib.h>
// kullanici tarafindan bolunen ve bolen degerleri girilerek bolme islemi yapilmak istenmektedir
// buna gore bolum ve kalanin elde edilmesini saglayan c kodunu yaziniz
void bolmeislemi(int bolunen,int bolen){
int kalan=bolunen%bolen;
int bolum=(bolunen-kalan)/ bolen;
printf("bolum degeri %d\n",bolum);
printf("kalan degeri: %d\n",kalan);


}
int main()
{
    int A;
    int B;
    printf("lutfen bolunen degerini giriniz: ");
    scanf("%d",&A);

      printf("lutfen bolen degerini giriniz: ");
    scanf("%d",&B);
 bolmeislemi(A,B);



    return 0;
}
