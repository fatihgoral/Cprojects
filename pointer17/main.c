#include <stdio.h>
#include <stdlib.h>

//dizi boyutunu ve elemanları alır,ardindan dii icerisinde aranan sayi bulup poziyonu döndürür
//bastir fonksiyonuu dizinin elemaanlarini kullanicidan alir
//ara fonksiyonu verilen sayiyi dizi icerisinde arayip pozisyonunu bulur,yoksa -1 dondurur
//main fonksiyonu , diziyi tanımlar,elemalarini kullanicidan alir ve arama sonucunu ekrana yazdirir

void bastir(int* array, int size){
    int* ptr = array;// dizinin baslangic adresini veren pointer
    for(int i = 0; i < size; i++){
        scanf("%d", ptr++);
    }
}

int ara(int *arr, int size, int toSearch){ // dizide belirli bir sayiyi arar ve bulundugu indeksi döndürür
    int index = 0;
    int* arrEnd = arr + size - 1;// dizinin sonunu isaret eder
    while(arr <= arrEnd && *arr != toSearch){
        arr++;
        index++;
    }
    if(arr <= arrEnd){
        return index;
    }else{

    return -1;
    }
}
//Bu kosul, arr pointer'ının hala dizinin sonuna (arrEnd) gelmediğini kontrol eder. Yani, arr pointer'i
//dizinin gecerli bir elemanini isaret ediyorsa, arr <= arrEnd kosulu dogru olur.
//Bu durumda, dongudeki kosulun (*arr != toSearch) artık sağlanmadigi, yani arr'in
//isaret  ettigi elemanın (*arr) toSearch ile eşlestiği anlamina gelir.
int main()
{
    int array[100];
    int size, toSearch;

    printf("Dizi kac elemanli olacak: ");
    scanf("%d", &size);

    printf("Dizimizin elemanlari:\n");
    bastir(array, size);

    printf("Hangi elemani ariyorsun? ");
    scanf("%d", &toSearch);

    int searchIndex = ara(array, size, toSearch);
    if(searchIndex == -1){
        printf("%d elemani dizide bulunmuyor\n", toSearch);
    }else{
        printf("%d elemani %d. pozisyonda bulunuyor\n", toSearch, searchIndex + 1);
    }
    return 0;
}
