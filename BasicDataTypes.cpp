#include <iostream>
#include <cstdio>
using namespace std;

int i; long l; char ch; float f; double d;

int main() {
    cin >> i >> l >> ch >> f >> d;
    cout << i <<endl<< l <<endl<< ch <<endl;
    cout.precision(3);
    cout<<fixed<<f<<endl;
    cout.precision(9);
    cout<<fixed<<d;
    return 0;
}