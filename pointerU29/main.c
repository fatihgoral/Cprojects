#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    //Kullan�c�ya ka� elemanl� bir say� dizisi olu�turmak istedi�ini sorun
    //Pointer kullanarak elemanlar� tek tek al�n ve console a bast�r�n

    int arr[100];
    int N;
    int *ptr;
    ptr=arr;




    printf("Dizi kac elemanli olsun\n");
    scanf("%d",&N);

    printf("Lutfen elemanlari giriniz\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    printf("Degerlerim:\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }

    return 0;







}

