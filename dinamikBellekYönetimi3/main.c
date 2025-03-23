#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
   int n;

   printf("lutfen deger giriniz ");
   scanf("%d",&n);
   int i;
   printf("girdigimiz sayi degeri :%d\n",n);
   ptr=(int*)calloc(n,sizeof(int));
   if(ptr==NULL){
    printf("hafiza bolunemedi\n");
   }
  else{
   for(i=0;i<n;i++){
    ptr[i]=i+1;
   }
   printf("Sayilarim : ");

   for(i=0;i<n;i++){
    printf("%d ",ptr[i]);
   }

   free(ptr);
  }
    return 0;
}

