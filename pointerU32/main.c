#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tersCevir(char *kelime){
char *bas=kelime;
char *son=kelime+strlen(kelime)-1;

while(bas<son){
    char gecici=*bas;
    *bas=*son;
    *son=gecici;

bas++;
son--;
}
}

int main()
{

      char kelimeler[5][50];   // 5 kelime için alan ayýr
    int i;

    printf("Lutfen 5 adet kelime giriniz:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. kelime: ", i + 1);
        scanf("%s", kelimeler[i]);
    }

    // Her kelimeyi ters çevir
    for (i = 0; i < 5; i++) {
        tersCevir(kelimeler[i]);
    }

    printf("\nTers cevrilmis kelimeler:\n");
    for (i = 0; i < 5; i++) {
          printf("%s\n", kelimeler[i]);

    }
    return 0;
}
