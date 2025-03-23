#include <stdio.h>
#include <stdlib.h>

void allNumbers(int numbers[]){
for(int i=0;i<6;i++){
    printf("%d. elemanin degeri : %d\n",i+1,numbers[i]);
    // fonksiyona dizi gönderme örnegi;
}
}

int main()
{
  int numbers[6]={12,23,57,99,21,3};
  allNumbers(numbers);
    return 0;
}
