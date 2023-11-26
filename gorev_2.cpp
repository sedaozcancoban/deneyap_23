#include <iostream>
using namespace std;
int main()
{
 int sayilar[] = {19, 11, 21, 13, 15}; /*dizimizi olusturuyoruz*/
 int i, maks, yer, n = 5; /*programda kullanacagimiz degiskenleri bu satirda tanimlieyoruz*/
 cout << "Dizi: ";
 for(i=0; i < n; i++)
 cout <<
sayilar[i] << " "; /* ust 4 satirda dizimizin tum elemanlarini sirayla çagirip 'cout' komutuyla yazdiriyoruz*/
 maks = sayilar[0];
 yer = 0;
 for(i=1; i < n; i++){
 if(maks <
sayilar[i]){
 maks =sayilar[i];
 yer = i; /*if kosuluyla en buyuk sayiyi bulana kadar dizinin tum elemanlarini gez, maks degerine ata, yer kismina maksin indis numarasini ata*/
 }
 }
 cout << "en buyuk eleman: " << maks << " ve indis numarasi: " /*sonucu yazdiran satir*/
<< yer;
 return 0;
}
