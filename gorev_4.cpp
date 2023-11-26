#include <iostream>
using namespace std;
int main()
{
 int dizi[100]; /* burada en fazla yuz elemanli dizi yazabiliriz*/
 int i, boyut, tek=0, cift=0;
 cout << "Eleman sayisini girin : ";
 cin >> boyut;
 cout<<"\nDizi elemanlarini girin :\n"; /*degisken tanimlama, dizi eleman sayisi belirleme*/
 for(i=0; i<boyut; i++){
 cout << "Elemani girin dizi[" << i << "] : ";
 cin >> dizi[i];            /*dizi elemanlarini yaz*/
 }
 for(i=0; i<boyut; i++){
 if(dizi[i]%2==0)
 cift++;
 else
 tek++;
 }              /* dizi elemanlarindan tek ve cift olanlari bulmak icin tum elemanlari tarayip if kosulu icinde mod al*/
 cout << "\nCift eleman sayisi: "
<< cift;
 cout << "\nTek eleman sayisi: "
<< tek; /*bulunan tek ve cift sayilari yazdirma*/
 return 0;
}
