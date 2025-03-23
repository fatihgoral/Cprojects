#include <stdio.h>
#include <stdlib.h>

int main()
{

   for(i=0;i<5;i++){
    printf("%d. satir toplami",i+1);
    for(j=0;j<5;j++){
   sum+=matris[i][j];
    }
    printf("%d\n",sum);
    sum=0;
   }

  for(i=0;i<5;i++){
        printf("%d. sutun toplami",i+1);
    for(j=0;j<5;j++){
        sum+=matris[j][i];
    }
  }




}

   }


    return 0;
}
