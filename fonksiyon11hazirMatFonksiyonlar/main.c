#include <stdio.h>
#include <stdlib.h>

int main()
{
    // e üssünün sonuucnu bulan hazir program;
    int i;
    for(i=0;i<5;i++){
            printf("e uzeri %d sonucu :%.3f\n",i,exp(i));
                // e üssünün sonucunu bulan hazir program;
    }
      for(i=1;i<5;i++){
    printf("log(%d): %f\n",i,log(i));
      }

             for(i=0;i<5;i++){
            printf("2 uzeri %d sonucu :%.3f\n",i,exp2(i));
             }
int number1,number2;
printf("enter two numbers : ");
scanf("%d %d",&number1,&number2);
printf("%d uzeri %d : %.2f\n",number1,number2,pow(number1,number2));

printf("***************************************\n");
printf("log(i): %lf\n",i,log(i));
    return 0;
}
