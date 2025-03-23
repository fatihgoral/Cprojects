#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not;
    printf("lutfen aldiginiz notu giriniz");
    scanf("%d",&not);
    if(not<=100 && not>=60){
        printf("harf notu: AA");
    }
    else if(not<60 && not>=30){
        if(not<60&& not>=50){
             printf("harf notu: BB");
        }
        else if(not<50 && not>=40){
                if (not<50&& not>45){
             printf("harf notu: CB");
                }else if(not<45&& not>40){
                 printf("harf notu: CC");
         }else{
            printf("harf notu: dc");
         }

    }
    }
    else{
         printf("harf notu: ff yani dersten kaldiniz");
    }

    return 0;
}
