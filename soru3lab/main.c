#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch1=2;
    float ch2=27.16;
    double ch3=1903.1905;

    char ch4='b';
    int ch5=7;
    float ch6=34.27;

    double ch7=17.1907;
    char ch8='a';
    int ch9=88;

    float ch10=27.16;
    double ch11=37.2024;
    char ch12='c';

    printf("karakterterler : %d   %f   %lf\n ",ch1,ch2,ch3);
     printf(" karakterler :  %c   %d   %f\n ",ch4,ch5,ch6);
      printf("karakterler :  %lf  %c   %d\n",ch7,ch8,ch9);
       printf("karakterler : %f   %lf  %c\n",ch10,ch11,ch12);

    return 0;
}
