#include <iostream>
using namespace std;
int main()
{
   const float phi = 3.14; 
   float r,t,v,s,l;
   cout << "Masukkan jari-jari     : ";
   cin >> r;
   
   cout << "Masukkan tinggi        : ";
    cin >> t;

   cout << "Masukkan garis pelukis : ";
   cin >> s;

    v = (1.0/3.0) * phi * r * r * t;
    cout << "Volume = " << v << endl;
   l = phi * r * (r+s);
   cout << "Luas   = " << l << endl;

}