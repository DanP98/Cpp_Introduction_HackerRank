#include <iostream>
#include <stdio.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    *a = (*a) + (*b);
    *b = abs((*a - *b) - *b);

}

int main() {
    int a=0, b=0;
    int *pa = &a, *pb = &b;

    cin >> a >> b;    
    update(pa, pb);
    cout << a << endl << b;

    return 0;
}