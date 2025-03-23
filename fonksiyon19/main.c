#include <stdio.h>
#include <stdlib.h>

int main()
{

  char myKey;
  printf("bir tusa basiniz:");
  myKey=getchar();
  printf("\n%c tusuna bastiniz\n",myKey);
  printf("tusun ASCII kodu:%d\n",myKey);

printf("**********************************\n");
putch(65);
putch(32);// bosluk karakteri ascii kodu
putch(66);
putch(32);
putch(67);
putch(32);
putch(68);
putch(32);
printf("\n**********************************\n");
for(int i=65;i<=80;i++){
    putchar(i);
    putchar(32);// bosluk karakteri ascii kodu
}

    return 0;
}
