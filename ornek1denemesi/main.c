#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Giris_Menusu(char arrayy[],int durum[],int a){

  printf("Sanal bebek Casper uygulamasina hos geldiniz. Bebegimiz Casper sizinle buyuyecek, gelisecek. Ona iyi bakacaginizdan hic suphemiz yok.\n");
  printf("Sanal bebegimizin adi Casper.\n");
  printf("Unutmayin, kurallara uymazsaniz Casper bebek olebilir.\n Dikkatli ve duzenli oynamanizi tavsiye ederim.\n Cunku biliyorsunuz ki Casper hassas bir bebek ve yeterince ilgilenmeniz gerekmektedir.\n");
  printf("Uygulamadaki gorevleriniz bebegimizin ihtiyaclarini dogru bir sekilde gidermenizdir.\n Bu oyun size farkli parametreleri kullanarak bir bebek buyutmeyi ogretirken sizi eglendirecek.\n");
  printf("Hazir misin?\n Her zaman hazir oldugunuzu biliyorum.\n O halde baslayalim.\n");

for(int i;i<a;i++){
        durum[i]=5;
    printf("%s Durumu %d",arrayy[i],durum[i]);

}

}
void Tokluk(int arrayy[],int indis,int*p){
    char yemek[25];
    int f,x=2,y=2,z=2,t=2;
     printf("Sectiginiz yemeklerin tokluk durumunu etkileme miktari yukardaki gibidir.\n ");
    printf("Sectiginiz secenekten kac tane ve yemek secenegi yemesi gerektigini yukarida belirtildigi gibi yaziniz:\n");

    printf("Casper icin aktiviteler listelenmistir .... \n");
    printf("Mama yedirmek icin--> 2\n");
    printf("Durum yedirmek icin--> 4\n");
    printf("Elma puresi yedirmek icin--> 1\n");
    printf("Kraker yedirmek icin--> 3\n");
    gets(yemek);
    f=atoi(yemek);
    for(int i=0;i<strlen(yemek);i++){
        yemek[i]=yemek[i+2];
    }

    x=strcmp(yemek,"Mama");
    y=strcmp(yemek,"Durum");
    z=strcmp(yemek,"Kraker");
    t=strcmp(yemek,"Elma puresi");
    if(x==0){
        arrayy[indis]+=2*f;
    }
     else if(y==0){
        arrayy[indis]+=4*f;
    }
     else if(z==0){
        arrayy[indis]+=3*f;
    }
     else if(t==0){
        arrayy[indis]+=1*f;
    }
 else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz \n");
     arrayy[indis+1]+=1;// uyku artar
     arrayy[indis+2]=-1;// sevgi azalir
     arrayy[indis+3]=-1; // sosyallesme azalir
     arrayy[indis+4]=+1; // saglik artar
    arrayy[indis+5]-=1;  // egitim azalir
   arrayy[indis+6]-=1;  //   hijyen azalir
   arrayy[indis+7]+=1;   //   tuvaet artar
   arrayy[indis+8]=-1; // spor azalir
  arrayy[indis+9]+=1;     // eglence artar
  arrayy[indis+10]=-1; // zeka azalir
   arrayy[indis+11]=-1; // kisisleGelisim azalir
   arrayy[indis+12]=-1;// psikoloji azalir






  if(arrayy[indis]>10){
    printf("Casper bebek patladı oldu");
    *p=0;

    }

}


void Sevgi(int arrayy[],int indis){
    int b,s;
     printf("Sectiginiz aktivitede yazan rakam kadar bu sevgi ihtiyac duzeyi duzenlenecektir\n");
    printf("Casper icin aktiviteler listelenmistir .... \n");
    printf("CASPER Memati oynatmak -->4");
    printf("Sarılmak--> 2\n");
    printf("Dans ettirmek--> 3\n");
    printf("sectiginiz secenegi giriniz:");
    scanf("%d",&b);
     while ((s = getchar()) != '\n' && s != EOF);
    if(b==2){
        arrayy[indis]+=2;

    }
    else if(b==3){
        arrayy[indis]+=3;

    }
     if(b==4){
        arrayy[indis]+=4;

    }
    else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");

    arrayy[indis+1]+=1;// sosyallesme artar
    arrayy[indis+7]+=1;// eglence artar
    arrayy[indis+9]+=1; // kisiselgelisim artar
    arrayy[indis+10]+=1; // psikoloji artar
    arrayy[indis-2]-=1; // tokluk azalir
    arrayy[indis-1]+=1; // uyku azalir
    arrayy[indis+3]-=1;   // egitim azalir
    arrayy[indis+4]-=1; // hijyen azalir
    arrayy[indis+5]-=1; // tuvalet azalir
    arrayy[indis+6]-=1; // spor azalir
    arrayy[indis+8]-=1; // zeka azalir
}
void Sosyallesme(int arrayy[],int indis){
    int b,s;
     printf("Sectiginiz aktivitede yazan rakam kadar bu sosyallesme ihtiyac duzeyi duzenlenecektir\n");

    printf("Casper icin aktiviteler listelenmistir .... \n");
    printf("sohbet etmek--> 2\n");
    printf("Aile ile vakit gecirme--> 3\n");
    printf("Toplu bir etkinlikte yer almak--> 4\n");
    printf("sectiginiz secenegi giriniz:");
    scanf("%d",&b);
     while ((s = getchar()) != '\n' && s != EOF);
    if(b==2){
        arrayy[indis]+=2;

    }
    else if(b==3){
        arrayy[indis]+=3;

    }
    else if(b==4){
        arrayy[indis]+=4;

    }
else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");

     arrayy[indis-3]-=1;//tokluk azalir
     arrayy[indis-2]-=1;//uyku azalir
     arrayy[indis-1]+=1;//sevgi azalir
     arrayy[indis+4]+=1; // tuvalet artar
    arrayy[indis+6]+=1;//eglence artar
    arrayy[indis+8]+=1; // kisiselgelisim artar
    arrayy[indis+9]+=1; // psikoloji artar
    arrayy[indis+2]-=1;  // egiitm azalir
    arrayy[indis+3]-=1;  // hijyen azalir
    arrayy[indis+5]-=1;  // spor azalir
   arrayy[indis+7]-=1; // zeka azalir

}
int Uyku(int x){
    if(x==0)
    return x;

    else if(x!=0)
        return Uyku((x-1));

}
void Saglik(int arrayy[],int indis){
    int b,s;
     printf("Sectiginiz aktivitede yazan rakam kadar bu saglık ihtiyac duzeyi duzenlenecektir\n");

   printf("Casper icin aktiviteler listelenmistir .... \n");
    printf("doktora git--> 4\n");
    printf("yuruyus yap--> 3\n");
    printf("nefes egzersizi yap --> 1\n");
   printf("sectiginiz secenegi giriniz:");
    scanf("%d",&b);
     while ((s = getchar()) != '\n' && s != EOF);
    if(b==1){
        arrayy[indis]+=1;

    }
    else if(b==3){
        arrayy[indis]+=3;

    }
     else if(b==4){
        arrayy[indis]+=4;

    }

   else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");

     arrayy[indis-4]-=1;// tokluk azalir
     arrayy[indis-3]-=1;//uyku azalir
     arrayy[indis-2]-=1;//sevgi azalir
     arrayy[indis+1]-=1; // egitim azalir
     arrayy[indis+3]-=1;//tuvalet  azalir
     arrayy[indis+4]-=1; // spor azalir
     arrayy[indis-1]+=1;//sosyallesme artar
     arrayy[indis+2]-=1;//hijyen azalir
     arrayy[indis+5]-=1;//eglence azalir
     arrayy[indis+7]-=1; // kisielgelisim azalir
     arrayy[indis+8]-=1; // psikoloji azalir
     arrayy[indis+6]+=1 ; // zeka artar



}
void Egitim(int arrayy[],int indis){
int k,r;
 printf("Sectiginiz aktivitede yazan rakam kadar bu egitim ihtiyac duzeyi duzenlenecektir\n");


printf("Casper icin aktiviteler listelenmistir .... \n");
    printf("ders calısmak --> 4\n");
    printf("odev yapmak  --> 3\n");
    printf("kursa gidip ders dinleme--> 2\n");
    printf("Sectiginiz aktivitelerin egitim durumunu etkileme miktari seceneklerdeki rakamlar ile dogru orantılıdır.\n ");
    printf("sectiginiz secenegi giriniz:");
    scanf("%d",&k);
while ((r = getchar()) != '\n' && r != EOF);
if(k==4){
arrayy[indis]+=4;
}
if(k==3){
arrayy[indis]+=3;
}
if(k==2){
arrayy[indis]+=2;
}
else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");


     arrayy[indis-5]-=1; // tokluk azalir
     arrayy[indis-4]+=1; // uyku artar
     arrayy[indis-2]-=1;  //sosyallesme azalir
     arrayy[indis+1]-=1;  // hijyen azalir
     arrayy[indis+2]+=1; // tuvalet artar
     arrayy[indis+5]-=1 ; // eglence azalir
     arrayy[indis+5]+=1 ; // zeka artar
     arrayy[indis+6]+=1 ; // kisiselgelisim artar
     arrayy[indis+7]-=1 ; // psikoloji azalir
     arrayy[indis-3]-=1 ; // sevgi azalir
     arrayy[indis+3]-=1; // spor azalir
}
void Hijyen(int arrayy[],int indis){
int x=2,y=2,z=2;
char Hijyen[3][70];
printf("Casper icin aktiviteler listelenmistir .... \n");
 printf("Sectiginiz aktivitede yazan rakam kadar bu hijyen ihtiyac duzeyi duzenlenecektir\n");
printf("sectiginiz islemi ekrandaki yazi ile birebir ayni yazmalisiniz\n");

    printf("banyoya sokma--> 3\n");
    printf("menikure goturme--> 1\n");
    printf("parfum sikma--> 2\n");
    gets(Hijyen);
    x=strcmp(Hijyen,"banyoya sokma");
    y=strcmp(Hijyen,"menikure goturme");
    z=strcmp(Hijyen,"parfum sıkma");
    if(x==0){
    arrayy[indis]+=3 ;
    }
    else if(y==0){
    arrayy[indis]+=1 ;
    }
    else if(z==0){
    arrayy[indis]+=3 ;
    }
else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");


  arrayy[indis-6]-=1; // tokluk azalir
  arrayy[indis-5]+=1; // uyku artar
  arrayy[indis-3]+=1;  //sosyallesme artar
  arrayy[indis-2]+=1 ; // saglık artar
  arrayy[indis+6]+=1;  // psikoloji artar
  arrayy[indis-1]-=1; // egitim  azalir
  arrayy[indis-4]-=1; // sevgi azalir
  arrayy[indis+1]-=1; // tuvalet azalir
  arrayy[indis+2]-=1; // spor azalir
  arrayy[indis+3]-=1; // eglence azalir
  arrayy[indis+4]-=1; // zeka azalir
  arrayy[indis+5]-=1;  // kisiselgelisim azalir

}
void Tuvalet(int arrayy[],int indis){
int v,p;

printf("Sectiginiz aktivitede yazan rakam kadar bu saglık ihtiyac duzeyi duzenlenecektir\n");

printf("Casper icin aktiviteler listelenmistir .... \n");
printf("Her 5 saate bir toulete gitme-->1\n");
printf("Her 3 saate bir toulete gitme-->2\n");
printf("Her 1 saate bir toulete gitme-->3\n");
printf("sectiginiz secenegi giriniz:");
    scanf("%d",&v);
 while ((p = getchar()) != '\n' && p != EOF);
if(v==1){
    arrayy[indis]+=1 ;
    }
    else if(v==2){
    arrayy[indis]+=2 ;
    }
    else if(v==3){
    arrayy[indis]+=3 ;
    }
  else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");

 arrayy[indis-7]-=1; // tokluk azalir
     arrayy[indis-6]-=1; // uyku azalir
     arrayy[indis-4]-=1;  //sosyallesme azalir
    arrayy[indis-3]+=1;  // saglık artar
    arrayy[indis-5]-=1; // sevgi azalir
     arrayy[indis-1]-=1; // hijyen azalir
     arrayy[indis-2]-=1; // egitim azalir
     arrayy[indis+1]-=1; // spor azalir
     arrayy[indis+2]-=1; // eglence azalir
    arrayy[indis+2]-=1; // zeka azalir
    arrayy[indis+3]-=1; // kisiselgelisim azalir
    arrayy[indis+4]-=1; // psikoloji azalir

}
void Spor (int arrayy[],int indis){
    int v,p;

 printf("Sectiginiz aktivitede yazan rakam kadar bu spor ihtiyac duzeyi duzenlenecektir\n");

printf("Casper icin aktiviteler listelenmistir .... \n");
printf(" bebegi yuruyuse cikarma -->1");
    printf("bebege bisiklet surdurme--> 3\n");
    printf("bebekle top oynama --> 4\n");

printf("sectiginiz secenegi giriniz:\n");
 scanf("%d",&v);
 while ((p = getchar()) != '\n' && p != EOF);
 if(v==1){
    arrayy[indis]+=1 ;
    }
    else if(v==3){
    arrayy[indis]+=3 ;
    }
    else if(v==4){
    arrayy[indis]+=4 ;
    }
   else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");

   arrayy[indis-8]-=1; // tokluk azalir
     arrayy[indis-7]-=1; // uyku azalir
     arrayy[indis-5]+=1;  //sosyallesme artar
    arrayy[indis-4]+=1 ; // saglık artar
     arrayy[indis-2]-=1 ; // hijyen azalir
      arrayy[indis+1]+=1 ; // eglence artar
     arrayy[indis+2]+=1 ;  // zeka artar
      arrayy[indis+3]-=1 ;  // kisiselgelisim azalir
      arrayy[indis+4]-=1 ;  // psikoloji azalir
    arrayy[indis-6]-=1; // sevgi azalir
   arrayy[indis-3]-=1; // egitim azalir
  arrayy[indis-1]-=1; // tuvalet azalir

     }

  void Eglence (int arrayy[],int indis){
    int v,p;

 printf("Sectiginiz aktivitede yazan rakam kadar bu eglence ihtiyac duzeyi duzenlenecektir\n");

printf("Casper icin aktiviteler listelenmistir .... \n");
printf(" bebegi gıdıklama -->4");
    printf("bebege cizgi film izletme--> 3\n");
    printf("bebege oyuncak ayı ile oynatma --> 1\n");


printf("sectiginiz secenegi giriniz:\n");
 scanf("%d",&v);
while ((p = getchar()) != '\n' && p != EOF);
if(v==4){
    arrayy[indis]+=4 ;
    }
    else if(v==3){
    arrayy[indis]+=3 ;
    }
    else if(v==1){
    arrayy[indis]+=1 ;
    }
   else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");
arrayy[indis-9]-=1; // tokluk azalir
     arrayy[indis-8]-=1; // uyku azalir
     arrayy[indis-6]+=1;  //sosyallesme artar
    arrayy[indis-3]-=1 ; // hijyen azaldi
    arrayy[indis-2]+=1 ; // tuvalet artiyor
    arrayy[indis+3]+=1 ; // psikoloji artar
   arrayy[indis-7]-=1; // sevgi azalir
 arrayy[indis-4]-=1; // egitim azalir
 arrayy[indis-1]-=1; // spor azalir
 arrayy[indis+1]-=1 ; // zeka azalir
 arrayy[indis+2]-=1 ; // kisiselgelisim azalir

  }

void Zeka (int arrayy[],int indis){
     printf("Sectiginiz aktivitede yazan rakam kadar bu  Zeka ihtiyac duzeyi duzenlenecektir\n");
    int v,p;
    printf("Casper icin aktiviteler listelenmistir .... \n");
printf(" bebege santranc ogretme -->3");
    printf("bebege puzzle yaptirma--> 2\n");
    printf("bebege bulmaca cozdurme --> 1\n");
printf("sectiginiz secenegi giriniz:\n");
 scanf("%d",&v);
while ((p = getchar()) != '\n' && p != EOF);
if(v==3){
    arrayy[indis]+=3 ;
    }
    else if(v==2){
    arrayy[indis]+=2;
    }
    else if(v==1){
    arrayy[indis]+=1 ;
    }
   else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");
arrayy[indis-10]-=1; // tokluk azalir
arrayy[indis-9]-=1; // uyku azalir
    arrayy[indis-5]+=1 ; // egitim artar
 arrayy[indis-7]+=1;  //sosyallesme artar
    arrayy[indis-3]+=1 ; // tuvalet artiyor
    arrayy[indis+1]+=1 ; // kisisel gelisim artar
arrayy[indis-8]-=1; // sevgi azalir
arrayy[indis-4]-=1; // hijyen azalir
arrayy[indis-2]-=1; // spor azalir
arrayy[indis-1]-=1; // eglence azalir
arrayy[indis+2]-=1; // psikoloji azalir

}
void Kisiselgelisim(int arrayy[],int indis){
     printf("Sectiginiz aktivitede yazan rakam kadar bu kisiselgelisim ihtiyac duzeyi duzenlenecektir\n");
    int v,p;
    printf("Casper icin aktiviteler listelenmistir .... \n");
  printf(" bebege ensturman calmayý ögretme -->2");
   printf("bebege yazilim ve algoritma egitimine gonderme --> 4\n");
    printf("bebegi dil kursuna gonderme--> 1\n");

printf("sectiginiz secenegi giriniz:\n");
 scanf("%d",&v);
while ((p = getchar()) != '\n' && p != EOF);
if(v==2){
    arrayy[indis]+=2 ;
    }
    else if(v==4){
    arrayy[indis]+=4;
    }
    else if(v==1){
    arrayy[indis]+=1 ;
    }
   else
 printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");
arrayy[indis-11]-=1; // tokluk azalir
arrayy[indis-10]-=1; // uyku azalir
    arrayy[indis-6]+=1 ; // egitim artar
 arrayy[indis-8]+=1;  //sosyallesme artar
    arrayy[indis-3]+=1 ; // tuvalet artar
    arrayy[indis-2]+=1 ; // eglence artar
    arrayy[indis-1]+=1 ;// zeka artar
    arrayy[indis-9]-=1; // sevgi azalir
    arrayy[indis-5]-=1; //hijyen azalir
    arrayy[indis-3]-=1; // spor azalir
    arrayy[indis+1]+=1; // psikoloji artar
}

void Psikoloji (int arrayy[],int indis){
   printf("Sectiginiz aktivitede yazan rakam kadar bu psikoloji ihtiyac duzeyi duzenlenecektir\n");
    int v,p;
    printf("Casper icin aktiviteler listelenmistir .... \n");
  printf(" bebege iltifat et ve guzel sozler soylemek -->2");
   printf("bebege motivasyon konusmasi dinletme --> 1\n");
    printf("bebegin derdini dinleme --> 3\n");

printf("sectiginiz secenegi giriniz:\n");
 scanf("%d",&v);
 while ((p = getchar()) != '\n' && p != EOF);
 if(v==2){
    arrayy[indis]+=2 ;
    }
    else if(v==1){
    arrayy[indis]+=1;
    }
    else if(v==3){
    arrayy[indis]+=3 ;
    }
   else
  printf("gecersiz islem yaptiniz lutfen ustteki formata uygun olarak yeniden giriniz ");
    arrayy[indis-12]-=1; // tokluk azalir
    arrayy[indis-10]+=1 ; // sevgi artar
    arrayy[indis-11]-=1; // uyku azalir
    arrayy[indis-9]+=1;  //sosyallesme artar
    arrayy[indis-3]+=1 ; // eglence artar
    arrayy[indis-2]+=1 ;// zeka artar
    arrayy[indis-1]+=1 ; // kisiselgelisim artar
    arrayy[indis-9]-=1; // sosyallesme azalir
    arrayy[indis-7]-=1; // egitim azalir
    arrayy[indis-6]-=1; // hijyen azalir
    arrayy[indis-5]-=1; // tuvalet azalir
    arrayy[indis-4]-=1;  // spor azalir
}





int main()
{
    char ihtiyaclar[13][25]={"Tokluk","Uyku","Sevgi","Sosyallesme","Saglik","Egitim","Hijyen","Tuvalet","Spor","Eglence","Zeka","Kisiselgelisim","Psikoloji"};
    int duzey[13];
    int x=1,a,s,durum,uyku;
     for(int i=0;i<13;i++)
        duzey[i]=6;
    a=strlen(ihtiyaclar);
    Giris_Menusu(ihtiyaclar,duzey,a);
    while(x){

    for(int i=0;i<13;i++)
    printf("%s DUZEYI-->%d\n",ihtiyaclar[i],duzey[i]);
    printf("Lutfen seceneklere bakarak 1 ile 14 arasinda bir secim yapin: \n");
    printf("CASPER'a yemek yedirmek icin--> 1\n");
    printf("CASPER'i uyutmak icin--> 2\n");
    printf("CASPER'in sevgi seviyesini arttirmak icin--> 3\n");
    printf("CASPER'i sosyallestirmek icin--> 4\n");
    printf("CASPER'i daha saglikli hale getirmek icin--> 5\n");
    printf("CASPER'in egitim seviyesini arttirmak icin--> 6\n");
    printf("CASPER'in hijyen düzey ayari icin--> 7\n");
    printf("CASPER'a tuvalet durumunu düzenlemek icin--> 8\n");
    printf("CASPER'a spor aktivitesi yaptirmak icin --> 9\n");
    printf("CASPER'a eglence duzeyi ayari icin--> 10\n");
    printf("CASPER'a zeka seviyesini yukseltmek icin--> 11\n");
    printf("CASPER'ın kisisel gelisimine katkıda bulunmak icin -->12\n");
    printf("CASPER'ın psikolojisini duzeltmek icin --> 13\n");
    printf("Oyunu sonlandirmak icin--> 14\n");

    scanf("%d", &durum);
    while ((s = getchar()) != '\n' && s != EOF);

        switch (durum) {
            case 1:
                printf(" Tokluk durumunu incelemektesiniz Bu kısımda Tokluk paramatrelerini goreceksiniz...\n\n");
                Tokluk(duzey,0,&x);
                break;
           case 2:
                printf("Uyku durumunu incelemektesiniz Bu secenekte Uyku paramatrelerini goreceksiniz...\n\n");
                printf("gunde 1 kez uyutma icin-->1\n");
                printf("gunde 2 kez uyutma icin-->2\n");
                printf("gunde 3 kez uyutma icin-->3\n");
                printf("gunde 4 kez uyutma icin-->4\n");
                printf("uyuma duzeyinin artma miktari gunluk uyuma miktari ile orantilidir ");
                printf("gunde kac defa uyutmak istediginizi giriniz");
                scanf("%d",&uyku);
                Uyku(uyku);
                duzey[1]+=uyku;
                for(int i=0;i<13;i++)
                {
                    if(i==1)
                        continue;
                    duzey[i]-=1;
                }

                break;
             case 3:
                printf("Sevgi durumunu incelemektesiniz Bu secenekte Sevgi paramatrelerini goreceksiniz...\n\n");
                Sevgi(duzey,2);
               break;
               case 4:
                printf("Sosyallesme durumunu incelemektesiniz Bu secenekte Sosyallesme paramatrelerini goreceksiniz...\n\n");
                Sosyallesme(duzey,3);
                break;
            case 5:
                printf("Saglık durumunu incelemektesiniz Bu secenekte Saglık paramatrelerini goreceksiniz...\n\n");
                Saglik(duzey,4);
                break;
            case 6:
                printf("Egitim durumunu incelemektesiniz Bu secenekte Egitim paramatrelerini goreceksiniz...\n\n");
                Egitim(duzey,5);
                break;
            case 7:
                printf("Hijyen durumunu incelemektesiniz Bu secenekte Hijyen paramatrelerini goreceksiniz...\n\n");
                Hijyen(duzey,6);
                break;
            case 8:
                printf("Tuvalet durumunu incelemektesiniz Bu secenekte Tuvalet paramatrelerini goreceksiniz...\n\n");
                Tuvalet(duzey,7);
                break;
            case 9:
                printf("Spor durumunu incelemektesiniz Bu secenekte Spor paramatrelerini goreceksiniz...\n\n");
                Spor(duzey,8);
                break;

            case 10:
                printf("Eglence durumunu incelemektesiniz Bu secenekte Eglence paramatrelerini goreceksiniz...\n\n");
                Eglence(duzey,9);
                break;
            case 11:
                printf("Zeka durumunu incelemektesiniz Bu secenekte Zeka paramatrelerini goreceksiniz...\n\n");
                Zeka(duzey,10);
                break;
                case 12:
                printf("kisiselgelisim durumunu incelemektesiniz Bu secenekte kisiselgelisim paramatrelerini goreceksiniz...\n\n");
                Kisiselgelisim(duzey,11);
                break ;
                case 13:
                printf("psikoloji durumunu incelemektesiniz Bu secenekte psikoloji paramatrelerini goreceksiniz...\n\n");
                Psikoloji(duzey,12);
                break;

            case 14:
                printf("Programdan cikmak istediniz Programdan cikiliyor..\n\n");
                x=0;
                break;
            default:
                printf("Lütfen 1-14 arasindaki sayilardan birini seçerek devam edin...\n\n");
        }

        for(int i=0;i<13;i++){
            if(duzey[i]>10)
                duzey[i]=10;
        }
        while(duzey[0]<0 || duzey[1]<0 || duzey[4]<0){
            printf("Casper bebek oldu\n");
        }

    }




    return 0;
}
