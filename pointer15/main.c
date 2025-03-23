#include <stdio.h>
#include <stdlib.h>

int main()
{
    // kullaniciya kac elemanli bir sayi dizisi olusturmak istedigini sorun
    // pointer kullanarak elemanlari tek tek alin ve console bastýrýn

    int arr[100];
    int N ;
    int *ptr;
    ptr=arr;

    printf("dizi kac elemanli olsun\n");
    scanf("%d",&N);
    printf("lutfen elemanlari giriniz:");
    for(int i=0;i<N;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
//    Bu ifadeyi iki kez yazmamýzýn sebebi, pointer'in once kullanicidan veri almak icin,
//    ardindan da bu verileri ekrana yazdirmak
//     icin dizinin basini isaret etmesini saglamaktir. Eger bu ifadeyi ikinci kez yazmazsak,
//     pointer dizinin sonunda kalacagi icin elemanlari dogru sekilde yazdirmak mumkun olmaz.
    printf("degerlerim :\n");
    for(int i=0;i<N;i++){
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}
