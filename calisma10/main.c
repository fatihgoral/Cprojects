include <stdio.h>

// Fonksiyon bildirimi
void harfSayisiVeBuyukHarfCevir(char **isim);

int main() {
    char metin[5][20] = {"okan", "fatih", "Ayse", "fatih", "huseyin"};
    char *isim[5];  // Pointer dizisi
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // Her pointer metin dizisindeki kelimelere i�aret ediyor
    }

    harfSayisiVeBuyukHarfCevir(isim);

    return 0;
}

// Kullan�c�dan harf al�p, ka� tane oldu�unu bulup, k���kse b�y��e �eviren fonksiyon
void harfSayisiVeBuyukHarfCevir(char **isim) {
    int harfSayisi;
    printf("Kac harf gireceksiniz? ");
    scanf("%d", &harfSayisi);

    char harfler[harfsayisi];
    printf("harfleri girin");
    for(int i=0;i<hrfsayisi;;i++){
        scanf("%c",&harfler[i]);
    }

    if(harf>='a' && harf<='z'){
        buyukharf=harf-32;
    }
    else{
        buyukharf=harf;
    }
    int kucukharfsayisi=0;
    int buyukharfsayisi=0;

    for(int i=0;i<5;i++)
{
    for(int j=0;isim[i][j]!='\0';j++){
        if(isim[i][j]==harf){
            kucukharfsayisi++;
            isim[i][j]=buyukHarf;
        }
        else if(isim[i][j]==buyukharf){
            buyukharfsY�S�++;
        }


}

