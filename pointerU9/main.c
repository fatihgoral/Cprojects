#include <stdio.h>
#include <stdlib.h>

int main()
{
  char can[100]="fatih";
  char *ptr;
  ptr=can;

  printf("1. karakterim:%c\n",*ptr);
  printf("2. karakterim : %c\n",*(ptr+1));
    printf("3. karakterim : %c\n",*(ptr+2));

    return 0;
}
