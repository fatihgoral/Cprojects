#include <stdio.h>
#include <stdlib.h>
// klavyeden taban ve us degeri girilen a^b seklindi bir islemin sonucunu
// fonksiyon kullanarak hesaplayan ve sonuclarý ekrana listeleyen C programini yaziniz
int usAl(int taban,int us){
    int i;
    int sonuc=1;
for(i=1;i<=us;i++){
sonuc=taban*sonuc;
}
return sonuc;
}

int main()
{
   int a,b;
printf("lutfen ifademin taban degeri ile us degerinii girininiz : ");

scanf("%d %d",&a,&b);
int result=usAl(a,b);
printf("%d ^ %d = %d",a,b,result);

    return 0;
}
