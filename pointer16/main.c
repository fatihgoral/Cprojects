#include <stdio.h>
#include <stdlib.h>
void bastir(int* arr ,int N){
    printf("\n degerlerim:\n");
    for(int i=0;i<N;i++){
        printf("%d ",*arr);
        arr++;
    }
    printf("\n");
}
int main()
{
    // kullaniciya kac elemanli bir sayi dizisi olusturmak istedigini sorun
    // pointer kullanarak elemanlari tek tek alin ve console bastýrýn

    int source_arr[100];// kaynak dizi en fazla 100 elamnali olabilir
    int dest_arr[100];// hedef dizi en fazla 100 elemanli olabilir
    int N ;
    int *source_ptr; // kaynak diziyi isaret eden pointer
    int* dest_ptr;// hedef diziyi isaret eden pointer
    int* end_ptr;// kanak dizinin son elemanini isaret eden pointer

    // pointerlarý dizilerin baslarina ayarlar
    source_ptr=source_arr;
    dest_ptr=dest_arr;

    printf("dizi kac elemanli olsun:\n");
    scanf("%d",&N);

    printf("lutfen elemanlari giriniz:\n");
    for(int i=0;i<N;i++){
        scanf("%d",(source_ptr));
        source_ptr++;
    }

      source_ptr = source_arr; // Pointer'ý tekrar dizinin baþýna döndür
    end_ptr = &source_arr[N - 1]; // Dizinin son elemanýný gösterir
    dest_ptr = dest_arr; // Hedef diziyi baþlat

    printf("kaynak arrayim kopyalanmadan once:\n");
  bastir(source_arr,N);


  }
    printf("\n kopyalandiktan sonraki source arrayim:\n");
    bastir(source_arr,N);
printf("\n kopyalandiktan sonraki destination arrayim:\n");
bastir(dest_arr,N);

    return 0;
}

