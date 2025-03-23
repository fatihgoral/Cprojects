#include <stdio.h>
#include <stdlib.h>
void bolme(int *n){
    if((*n%2==0) && (*n%3==0)){
            printf("sayimiz 6 ile tam bolunur\n");
    }
else if(*n%2==0){
    printf("sayimiz ikiye bolunen bir sayidir\n");
}
else if(*n%3==0){
    printf("sayimiz 3 ile bolunebilen sayidir\n");
}else{
printf("sayýmýz hem 2 hem 3 ile dolayýsýyla 6 ile de bolunmez\n");
}
}



int main()
{
    int sayi;
    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    bolme(&sayi);

    return 0;
}
