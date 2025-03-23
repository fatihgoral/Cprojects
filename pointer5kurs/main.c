#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Bellek adresleri degiskenlere atanir ve bu adresler, programin calisma suresi boyunca sabit kalir.
    Siz degeri degistirdiginizde, bu degerin saklandigi bellek hucresinin icerigi degisir,
    ancak bu hucrenin adresi yani bulundugu yer degismez.
    */

    int* sayi;
    int n;
    n=20;
    sayi=&n;

    printf("%d\n",*sayi);
    printf("%d\n",n);
    printf("%d\n",&n);
    printf("%d\n",sayi);
    printf("\n\n\n");

   *sayi=30;

    printf("%d\n",*sayi);
    printf("%d\n",n);
    printf("%d\n",&n);
    printf("%d\n",sayi);

    return 0;
}
