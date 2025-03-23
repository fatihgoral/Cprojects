#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i=0;

    printf("lutfen bir cumle giriniz\n");
    fgets(cumle,sizeof(cumle),stdin);
    printf("\n");

    /*
    while(cümle[i])
        {
            printf("%c\n",cumle[i]);
            i++;
        }
    */

    /*while(cumle[i]!='\0'){
        printf("%c\n",cumle[i]);
        i++;
    }
*/

while(cumle[i]!=NULL){
        printf("%c\n",cumle[i]);
        i++;
}


    return 0;
}
