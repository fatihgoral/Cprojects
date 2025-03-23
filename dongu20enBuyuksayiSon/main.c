#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // INT_MAX ve INT_MIN sabitleri için

int main() {

    int number,i=1,smallestNumber=INT_MAX,largestNumber=INT_MIN;
    do{
   printf("lutfen bir sayi giriniz :");
    scanf("%d",&number);
    if(number==0){
        break;

    }
    if(number<smallestNumber){
        smallestNumber=number;
    }
      if(number>largestNumber){
   largestNumber=number;
    }

i++;
    }while(number!=0);

    if(i==1){
        printf("hic sayi girisi yapilmadi\n");
    }
else{
    printf("en buyuk sayi: %d\n",largestNumber);
    printf("en kucuk sayi: %d\n",smallestNumber);

}

  return 0;
}

