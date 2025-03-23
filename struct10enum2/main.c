#include <stdio.h>
#include <stdlib.h>
enum Correct{
FALSE,
TRUE
};

int main()
{
 enum Correct myConst;
 myConst=FALSE;
if(myConst){
    printf("transaction correct: %d\n",myConst);
}else{
printf("transaction Notcorrect :%d\n",myConst);
}



    return 0;
}
