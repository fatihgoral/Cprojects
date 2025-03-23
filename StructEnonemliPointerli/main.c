#include <stdio.h>
#include <stdlib.h>

struct futbolcu {
  char ad[20];
  char takim[20];
  int yas;
  };

int main()
{
 struct futbolcu f;
 strcpy(f.ad,"ronaldo");
 strcpy(f.takim,"galatasaray");
 f.yas=34;

 printf("futbolcunu adi:%s\n",f.ad);
 printf("futbolcunun takimi : %s\n",f.takim);
 printf("futbolcunun yasi: %d\n",f.yas);
 printf("\n\n");

 struct futbolcu *ptr=&f;
 printf("futbolcunu adi:%s\n",(*ptr).ad);
 printf("futbolcunun takimi : %s\n",(*ptr).takim);
 printf("futbolcunun yasi: %d\n",(*ptr).yas);
 printf("\n\n");

 printf("futbolcunu adi:%s\n",ptr->ad);
 printf("futbolcunun takimi : %s\n",ptr->takim);
 printf("futbolcunun yasi: %d\n",ptr->yas);
 printf("\n\n");




    return 0;
}
