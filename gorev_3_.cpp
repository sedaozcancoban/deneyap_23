#include <iostream>
using namespace std;

int main()
{
 int dizi[] = {12, 67, 78, 45, 78, 78, 32, 16, 16, 57};
 int i, j, n = 10; /*diziyi olustur, degiskenleri tanimla*/
 cout << "Dizi: ";
 for(i = 0; i < n; i++)
 cout << dizi[i] << " ";
 cout << "\nTekrar eden elemanlar: ";
 for(i = 0; i < n-1; i++)
 if(dizi[i] == dizi[i+1]) /*for dongusuyle art arda birbirine esit olan elemanlarý tara, tekrar edenleri bul*/
 cout << dizi[i] << " "; /*tekrar eden elemanlari yazdir*/
 return 0;
}
