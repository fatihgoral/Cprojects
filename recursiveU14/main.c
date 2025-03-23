#include <stdio.h>
#include <stdlib.h>
//recursive ile fibonacci dizisi ilk iki eleman 1 1 olacak
int fibo(n){
if(n==1|| n==2){
    return 1;
}
else{
    return fibo(n-1)+fibo(n-2);
}

}
int main()
{
    int sayi;
    printf("kac adet fibonocci sayisi uretilecek");
    scanf("%d",&sayi);
    for(i=1;i<sayi;i++){
        printf("%d\n",fibo(i));
    }
    return 0;
}
