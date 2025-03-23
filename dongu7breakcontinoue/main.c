#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    while(i<10){
        if(i==5){
            break;
        }
        printf("%d",i);
        i++;
    }
    printf("\n**********************************\n");

     int l=1;
    while(l<10){
        if(l==5){
            l++;
            continue;
        }
        printf("%d",l);
l++;
    }
    printf("\n**********************************\n");



int j;
for(j=1;j<=10;j++){
        if(j==5){
            break;
        }
    printf("%d",j);
}
    printf("\n**********************************\n");
int t;

for(t=1;t<=10;t++){
        if(t==5){
            break;
        }
    printf("%d",t);
}

    printf("\n**********************************\n");


int k=1;
do{
    if(k==5){
        break;
    }
    printf("%d",k);
    k++;
}while(k<=10);


printf("\n**********************************\n");


int y=1;
do{
    if(y==5){
        break;
    }
    printf("%d",y);
    y++;
}while(y<=10);



    return 0;
}



