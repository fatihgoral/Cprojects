#include <stdio.h>
#include <stdlib.h>

int main()
{
    char diziler[3][40] = {"ezel", "Leyla ile Mecnun", "kurtlar vadisi"};
printf("Diziler tanimlandi\n");
for(int i = 0; i < 3; i++){
    printf("%s\n", diziler[i]);
}

printf("Son\n");



    return 0;
}
