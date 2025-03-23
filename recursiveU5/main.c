#include <stdio.h>
#include <stdlib.h>
/*
taban us degerleri klavyeden girilmek üzere a^b ifadesinin hesaplatilmasini saglayan
c programini recursive fonk yardimiyla yaziniz
*/
int hesap(int us,int taban){
int sonuc;
if(us==0){
    sonuc=1;
}
 else{
    sonuc=taban*hesap(us-1,taban)
 }
return sonuc;

}


int main()
{
    int us,taban;
    printf("lutfen us degerini giriniz");
    scanf("%d",us);
    printf("lutfen taban degerini giriniz");
    scanf("%d",&taban);
    printf("%d ussu %d=%d",taban,us,hesap(us,taban));
    return 0;
}
