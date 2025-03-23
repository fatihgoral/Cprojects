#include <stdio.h>
#include <stdlib.h>

struct futbolcu{
char ad[20];
char takim[50];
int yas;
};

void listele(struct futbolcu x){
 printf("ad: %s\t",x.ad);
 printf("soyad: %s\t",x.takim);
 printf("yas : %d\t",x.yas);
}

int main()
{
    struct futbolcu f1={"icardi","galatasaray",34};
    listele(f1);
    return 0;
}
