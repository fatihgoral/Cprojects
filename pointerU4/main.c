#include <stdio.h>
#include <stdlib.h>
// pointer kullanmadan
int ciftmi(int sayi){
if(sayi%2==0){
return 1;
    }else{
    return 0;
}
}

int ucile(int sayi){
if(sayi%3==0){
  return 1;
}else{
     return 0;
}
}

int main()
{
    int n;
  printf("lutfen bir sayi giriniz: ");
  scanf("%d",&n);

if(ciftmi(n)==1 && ucile(n)==1){
  printf("sayi 6 ile tam bolunuyor\n");
  }
  else if(ciftmi(n)==1){
    printf("sayi cifttir\n");
  }
  else if(ucile(n)==1){
    printf("sayi 3 ile tam bolunebilir\n");
  }

else{
    printf("ne ciftir ne de 3 ile bolunebilir");
}


    return 0;
}
