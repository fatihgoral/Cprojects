#include <stdio.h>
#include <stdlib.h>
// kullaniciya kac elemanli dizi olusturmak istedigini sýrun
// kullanicidan elemanlari pointer kullanrak alýn ve yazdirin
int main()
{
    int *ptr;
    int dizim[100];
    int n;

 printf("kac elemanli bir dizi girmek istiyorsunuz: ");
 printf("\n");
 scanf("%d",&n);
printf("lutfem elemanlari giriniz: ");
 for(ptr=dizim;ptr<dizim+n;ptr++){
     scanf("%d",ptr);
 }

 for(ptr=dizim;ptr<dizim+n;ptr++){
    printf("%5d",*ptr);
 }
    return 0;
}
