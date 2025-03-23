#include <stdio.h>
#include <stdlib.h>
/* klavyeden kac adet fibonocci sayisi uretilecegi bilgisi girilerek
sayilarin uretilmesini saglayan c programýný recursive fonksiyon kullanrak yaziniz */
// bu programda yapilan fibonocci serisi normalde bildigimiz fibonocci serilerinden
// normalde 1 1 2 3 5 olmasý gerekirken 0 1 1 2 3 5 olmus

int fibonocci(int n){

    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }else{
    return(fibonocci(n-2)+fibonocci(n-1));
    }
}

int main()
{
  int i,sayi;
  printf("kac adet sayi girilecek\n");
  scanf("%d",&sayi);
  for(i=0;i<sayi;i++){
    printf("%d\n",fibonocci(i));
  }
    return 0;
}
