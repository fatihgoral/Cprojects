#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
  int min,max;
  int* ptr;
  int arr[N];
  printf("%d kadar deger giriniz:\n",N);
  for(ptr=arr;ptr<=arr+N;ptr++){// bunu baska sekilde göstermeyi sor ögren
    scanf("%d",ptr);
  }
    max=min=arr[0];
    for(ptr=arr+1;ptr<arr+N;ptr++){// arr+1 sor
        if(*ptr>max){
            max=*ptr;
        }
        if(*ptr<min){
            min=*ptr;
        }
    }
    printf("dizimizin maksimum degeri:%d\n",max);
    printf("dizimizin minimum degeri %d\n",min);

    return 0;
}
