#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int N=0, q=0, k=0, ii=0, jj=0;

// Using vector

int main() {

    cin >> N >> q;
    vector<vector<int>> vec1;

    for (int i=0; i<N; i++){
        cin >> k;
        vector<int> vec2;
        for (int j=0; j<k; j++){
            int z=0;
            cin >> z;
            vec2.push_back(z);
        }
        vec1.push_back(vec2);
    }

    for(int i=0; i<q; i++){
        cin >> ii >> jj;
        cout << vec1[ii][jj] << endl;
    }

    return 0;
}