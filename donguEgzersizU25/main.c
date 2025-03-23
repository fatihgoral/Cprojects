#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t1=1,t2=1,next;
    printf("fibonacci dizisinin eleman sayisisni giriniz: ");
    scanf("%d",&n);

 printf("%d %d",t1,t2);

 for(int i=3;i<n;i++){
    next=t1+t2;
    printf("  %d",next);
    t1=t2;
    t2=next;
 }
    printf("\n");

    return 0;
}
