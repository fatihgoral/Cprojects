#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[]){
    // argv[0] her zaman programin adini tutar
    // gun_sayi, ay,gun_adi,yil
    if(argc==5){
        printf("BUGUN: %d %s %s %d",atoi(argv[1]),argv[2],argv[3],atoi(argv[4]));
    }else{
        printf("yanlis arguman sayisi");
    }

    return 0;
}
