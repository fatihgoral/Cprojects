#include <stdio.h>
#include <stdlib.h>
typedef struct {
char isim[10];
float x_ekseni;
float y_ekseni;
}nokta;

void ekrana_yazdir(nokta p[], int n){
for(int i=0;i<n;i++){
    printf("%s =(%f,%f)\n",p[i].isim,p[i].y_ekseni,p[i].x_ekseni);
}
}

int main()
{
    nokta can[5]={{"can",3,4},{"canan",3,5},{"fatih",3,4},{"ali",6,9},{"berkay",1,8}};
    ekrana_yazdir(can,5);
    return 0;
}
