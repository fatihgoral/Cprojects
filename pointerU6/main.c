int* fonksiyon(int *x) {
    *x = *x + 10; // x'in iþaret ettiði deðeri 10 artýr
    return x; // x'in adresini döndür
}

int main() {
    int a = 5;
    int *ptr = &a;
    printf("Deger: %d\n", *fonksiyon(ptr)); // 15 yazdýrýr
    return 0;
}
