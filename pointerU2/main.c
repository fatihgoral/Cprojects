#include <stdio.h>

int main() {
    char name = 'A';    // Tek bir harf
    double y = 3.1415;
    int x = 7;

    char *nameptr = &name;
    double *yptr = &y;
    int *xptr = &x;

    printf("First Addresses:\n\n");
    printf("name's first address: %x\tvalue: %c\n", nameptr, *nameptr);
    printf("y's first address: %x\tvalue: %f\n", yptr, *yptr);
    printf("x's first address: %x\tvalue: %d\n", xptr, *xptr);
    printf("Pointer address (&nameptr): %x\n", &nameptr);
    printf("Pointer address (&xptr): %x\n", &xptr);
    printf("Pointer address (&yptr): %x\n", &yptr);

    nameptr++;  // 1 byte artýrýr (char türü 1 byte kaplar)
    xptr -= 3;  // 12 byte geri çeker (int türü 4 byte kaplar)
    yptr -= 4;  // 32 byte geri çeker (double türü 8 byte kaplar)

    printf("\nNext Addresses:\n\n");
    printf("name's next address: %x\tvalue: %c\n", nameptr, *nameptr);
    printf("y's next address: %x\tvalue: %f\n", yptr, *yptr);
    printf("x's next address: %x\tvalue: %d\n", xptr, *xptr);
    printf("Pointer address (&nameptr): %x\n", &nameptr);
    printf("Pointer address (&xptr): %x\n", &xptr);
    printf("Pointer address (&yptr): %x\n", &yptr);

    return 0;
}
