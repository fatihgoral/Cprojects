#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen baslangic ,bitis ve artim degeri girilen bir serinþin elde edilmesini saglayan c programýn

void diziOlustur(int baslangic,int bitis,int artisMiktari){
if(baslangic<bitis){
    printf("%3d",baslangic);
   return diziOlustur(baslangic+artisMiktari,bitis,artisMiktari);
}
}

int main()
{
    int starting,finish,accrual;
    printf("lutfen bir baslangic degeri girin:");
    scanf("%d",&starting);
    printf("lutfen bitis degerini giriniz:");
    scanf("%d",&finish);
    printf("lutfen artis miktarini giriniz:");
    scanf("%d",&accrual);
    diziOlustur(starting,finish,accrual);

    return 0;
}

