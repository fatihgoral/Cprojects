#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int randomNumber,guessNumber,guessCount,score=100;
    printf("seninle simdi sayi tahmin etme oyunu oynayacagiz\n");
    printf("1 ile 100 arasinda sayi tuttum\n");
    printf("tahmin edeceksin\n");
      srand(time(NULL));
   randomNumber=rand()%100+1;
    while(guessNumber!=-1){
            printf("tahmin ettigin sayiyi gir : ");
   scanf("%d",&guessNumber);
    if(guessNumber==-1){
    break;
    }if(guessNumber<0|| guessNumber>100){
     printf("lutfen gecerli aralikta bir sayi giriniz\n");
    continue;
    }
guessCount++;
if(guessNumber==randomNumber){
    printf("tebrikler %d. seferde bildin",guessCount);
    break;
}else{
if(guessNumber<randomNumber){
    printf("daha buyuk bir sayi girmelisiniz kucuk girdiniz\n");
}
else if(guessNumber>randomNumber){
    printf("daha kucuk bir sayi girmelisiniz buyuk girdiniz\n");
}

score-=10;

}
}

printf("\n puanin 100 uzerinden %d\n",score<0 ? 0: score);
    return 0;
}
