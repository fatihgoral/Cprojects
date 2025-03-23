#include <stdio.h>
#include <stdlib.h>
struct sehirler{
char ad[20];
int nufus;
};
int main()
{
    struct sehirler s[3]={
    {"ankara",5},
        {"istanbul",15},
            {"antep",6},
    };
    for(int i=0;i<2;i++){
        printf("sehir %s\t nufus:%d\n ",s[i].ad,s[i].nufus);
    }
    printf("\n\n");
    struct sehirler *sptr=s;
     for(int i=0;i<2;i++){
        printf("sehir %s\t nufus:%d\n ",sptr->ad,sptr->nufus);
    }



    return 0;
}
