#include <stdio.h>
#include <stdlib.h>

int topla(int a,int b){
    return a+b;
}

int cikart(int a,int b){
    return a-b;
}

int carp(int a,int b){
    return a*b;
}

int bol(int a,int b){
    return a/b;
}

int main(){
    int x=9,y=4;
    int (*p[4])(int,int);
    //p, 2 int alan, 1 int döndüren bir fonksiyonun pointerı olacak
    p[0]=&topla;
    p[1]=&cikart;
    p[2]=&carp;
    p[3]=&bol;

    char operatorler[4]="+-*/";
    for(int i=0;i<4;i++)
        printf("%d%c%d=%d\n",x,operatorler[i],y,p[i](x,y));

    return 0;
}
