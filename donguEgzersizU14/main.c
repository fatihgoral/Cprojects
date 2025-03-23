#include <stdio.h>
/*
int main()
{
     int yil;
     printf("Lutfen bir yil giriniz\n");
     scanf("%d",&yil);

     if(yil % 400 == 0){
        printf("%d artik yildir",yil);
     }
     else if(yil %100 ==0){
         printf("%d artik yil degildir",yil);
     }
     else if(yil %4 ==0){
         printf("%d artik yil",yil);
     }
     else{
          printf("%d artik yil degildir",yil);
     }

    return 0;

}
*/

/*
   printf("Bir yil giriniz: ");
    scanf("%d", &yil);

    if ((yil % 4 == 0 && yil % 100 != 0) || yil % 400 == 0) {
        printf("%d bir artik yildir.\n", yil);
    } else {
        printf("%d bir artik yil degildir.\n", yil);
    }
     return 0;
*/

int main() {
    int yil;

    printf("Bir yil giriniz: ");
    scanf("%d", &yil);

    if (yil % 4 == 0) {
        if (yil % 100 == 0) {
            if (yil % 400 == 0) {
                printf("%d bir artik yildir.\n", yil);
            } else {
                printf("%d bir artik yil degildir.\n", yil);
            }
        } else {
            printf("%d bir artik yildir.\n", yil);
        }
    } else {
        printf("%d bir artik yil degildir.\n", yil);
    }

    return 0;
}

