#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    can[]="aralik";
    printf("karakter dizimizin boyu: %d",strlen(can));
    scanf("karakter dizimizin boyu: %d",sizeof(can));
    // sizeof '\0' degerini de aldýgý icin normalden bir fazla gosterirken strlen icin boyle bir sey soz konusu degil
    return 0;
}
