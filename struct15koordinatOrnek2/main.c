#include <stdio.h>
#include <stdlib.h>
typedef struct {
char isim[10];
float abs;
float ord;
}nokta;

void ekranaYazdir(nokta p[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%s=(%.2f,%.2f)\n",p[i].isim,p[i].abs,p[i].ord);
    }

}
int main()
{
  nokta fatih[5]={{"can",3,4},{"ertugrul",12,13},{"omer",3,4},{"ezel",3,4},{"behzat",3,4}};
  ekranaYazdir(fatih,5);
    return 0;
}
