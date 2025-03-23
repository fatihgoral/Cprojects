#include <stdio.h>
#include <stdlib.h>
int factorial(int sayi);
int main()
{
    int sayi;
  printf("lutfen bir sayi giriniz:");
  scanf("%d",&sayi);
  printf("%d!=%d",sayi,factorial(sayi));


    return 0;
}

int factorial(int sayi){
if(sayi==0){
 return 1;
}else{
   return sayi*factorial(sayi-1);;
}

}




/*  int result=1;
   int number;
    printf("lutfen faktoriyel hesaaplayacigimiz bir sayi giriniz ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        result*=i;
    }
printf("%d!=%d",number,result);
*/
