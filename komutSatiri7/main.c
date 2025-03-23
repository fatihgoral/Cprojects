#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
    printf("bana %d tane parametre geldi\n",argc);
    printf("benim adim %s\n",argv[0]);
    if(argc==3){
        printf("toplam:%d\n",atoi(argv[1])+atoi(argv[2]));
       } else{
            printf("hatali giris yaptiniz");
        }

    return 0;
}
