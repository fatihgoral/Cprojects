#include <stdio.h>
#include <stdlib.h>

float exponentiation(float x ,int y){
float result=1;
int i;
if(x>0){
  for(int i=0;i<y;i++)
 result*=x;
}else{

for(i=0;i<y;i++){
result*=1/x;
}
}

}

int main()
{
float base=0,result=0;
int exponent=0;
printf("enter base and exponent value : ");
scanf("%f%d",&base,&exponent);
result =exponentiation(base,exponent);
printf(" islem sonucu : %.1f",result);
    return 0;
}
