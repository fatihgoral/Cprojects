#include <stdio.h>
#include <stdlib.h>
// krlavyeden girilen bir N pozitif tamsayisina kadar olan sayilarin toplanarak
// sonucun ekrana gosterilmesini saglayan c programini rec
int topla(x){
if(x==0){
    return 0;
}
else{
    return x+topla(x-1);
}

}
int main()
{
    int N;
printf("lutfen bir tamsayi giriniz: ");
scanf("%d",&N);

printf("toplam sonucu :%d ",topla(N));



    return 0;
}
