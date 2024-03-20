#include <iostream>
using namespace std;
int main()
{
    int a,b;

    // Assigment variabel
    a = 5;
    b = 7;

    // Aritmatic operator
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = a / b;
    int mod = a % b;
    
    cout << "a + b =" << tambah << endl;
    cout << "a - b =" << kurang << endl;
    cout << "a * b =" << kali << endl;
    cout << "a / b =" << bagi << endl;
    cout << "a % b =" << mod << endl;
    
    // Relational operator
    cout << (a==b) << endl;  // harus dalam kurung
    cout << (a<b) << endl;
    cout << (a<=b) << endl;
    cout << (a>b) << endl;
    cout << (a<=b) << endl;
    cout << (a|=b) << endl;
    
    // Logical operator
    
    // Bitwise operator
    cout << (4 & 7) << endl;
    cout << (4 | 7) << endl;
    cout << (4 ^ 7) << endl;
    cout << (~4) << endl;
    cout << (4 << 7) << endl;
    cout << (4 >> 7) << endl;
    
    // Increment & decrement operator
    // Post increment
    cout << a++ << endl;
    cout << a << endl;

    // Pre increment = ditambah dulu baru shift out 
    cout << a << endl;
    cout << ++a << endl;
    
    // Post decrement
    cout << b-- << endl;
    cout << b << endl;
    
    // Pre decrement
    cout << b << endl;
    cout << --b <<endl;
    
    // Shorthand
    a = a+2;
    a += 2;
    a -= 2;
    a *= 2;
    a /= 2;
    b = b+3;
    b += 3;
    b -= 3;
    b *= 3;
    b /= 3;
} 