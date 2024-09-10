#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

int main(){
    // 2 ^ N

    int n;
    cin >> n;

    /*
    0001 = 1 = 2^0
    0010 = 2 = 2^1
    0100 = 4 = 2^2
    1000 = 8 = 2^3
    */

    // cout << pow(2, n) << endl;
    cout << (1 << n) << endl;

    return 0;
}