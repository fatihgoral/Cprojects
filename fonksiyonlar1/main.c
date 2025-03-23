#include <stdio.h>
#include <stdlib.h>
void myMessage(){
        printf("now I can a function\n");
    }
void nameList(char name[],int age){
printf("%s adli ogrencinin numarasi : %d\n ",name,age);
}

int main()
{
    myMessage();
    myMessage();
    nameList("fatih", 24);
    nameList("muhammed", 19);

    return 0;
}
