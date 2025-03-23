#include <stdio.h>
#include <stdlib.h>
struct futbolcu{
char ad[50];
char takim[50];
int yas;
};
int main()
{
   struct futbolcu f;
   strcpy(f.ad,"icardi");
   strcpy(f.takim,"galatasaray");
   f.yas=30;

   printf("ad: %s\n",f.ad);
      printf("takim: %s\n",f.takim);
   printf("yas : %d\n",f.yas);

   printf("\n\n");

   struct futbolcu *fptr;

   fptr=&f;

     printf("ad: %s\n",(*fptr).ad);
     printf("takim: %s\n",(*fptr).takim);
     printf("yas : %d\n",(*fptr).yas);

   printf("\n\n");


     printf("ad: %s\n",fptr->ad);
     printf("takim: %s\n",fptr->takim);
     printf("yas : %d\n",fptr->yas);


    return 0;
}
