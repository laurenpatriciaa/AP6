#include <iostream>
using namespace std;
int main()
{
   const float phi = 3.14;
   float r,t,v;
   cout << "Masukkan jari-jari : ";
   cin >> r;
   
   cout << "Masukkan tinggi    : ";
   cin >> t;

   v = phi * r * r * t;
   cout << "volume = " << v << endl;

}