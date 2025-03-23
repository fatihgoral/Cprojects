#include <stdio.h>
#include <stdlib.h>
// klavyeden kac adet fibonocci sayisi girilecegi bilgisi alinarak sayilarin uretilmesini saglayan c programini bulunuz
void fibonacci(int n){
int i;
int next;
int ilk,ikinci=1;
printf("uretilecek fibonocci sayilari:\n");
for(i=1;i<=n;i++){
    if(i<=1){
        next=1;
    }
    else{
            next=ilk+ikinci;
            ilk=ikinci;
            ikinci=next;
    }
    printf("%d ",next);
}

}

int main()
{
    int sayi;
    printf("kac adet sayi uretilecek");
    scanf("%d",&sayi);
    fibonacci(sayi);
    return 0;
}
