#include <iostream>
using namespace std;
int main()
{
   const float phi = 3.14;
   float r,v,l;
   cout << "Masukkan jari-jari : ";
   cin >> r;

    l= 4 * phi * r * r;
    cout << "Luas   = " << l << endl;

   v= (4.0/3.0) * phi * r * r * r;
   cout<< "Volume = " << v << endl;

} 