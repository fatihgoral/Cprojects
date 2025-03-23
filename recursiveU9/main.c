#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen bir cumlenin bosluk karakterleri de dahil kac karaakter oldugunu bulan programi yaziniz
int karakter(char *s){
if(*s=='\0'){
    return 0;
}
else{
    return 1+karakter(s+1);
}
}

int main()
{
    char cumle[100];
   printf("lutfen cumle giriniz: ");
   gets(cumle);
   printf("karakter sayisi: %d",karakter(cumle));

    return 0;
}
