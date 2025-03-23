#include <stdio.h>
#include <stdlib.h>

int main()
{
 char dizi[100];
 printf("lutfen cumleyi giriniz:");
gets(dizi);// gets ile metni al
for(int i=0;i<strlen(dizi);i++){
    if(dizi[i]==' '){
        dizi[i+1]=toupper(dizi[i+1]);
    }
    else if(i==0){
        dizi[i]=toupper(dizi[i]);
    }
}

printf("\ncumle: %s ",dizi);// en son diziyi yani girilen cumleyi tekrar yazdir
    return 0;
}

}
}
