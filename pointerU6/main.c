int* fonksiyon(int *x) {
    *x = *x + 10; // x'in i�aret etti�i de�eri 10 art�r
    return x; // x'in adresini d�nd�r
}

int main() {
    int a = 5;
    int *ptr = &a;
    printf("Deger: %d\n", *fonksiyon(ptr)); // 15 yazd�r�r
    return 0;
}
