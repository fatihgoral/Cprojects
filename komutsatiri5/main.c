#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    // bengu 100 furkan 90
  int i;
  for(i=1;i<argc;i=i+2){
        printf("ogrencinin adi:%s  ogrencinin notu:%d\n",argv[i],atoi(argv[i+1]));

  }

    return 0;
}
