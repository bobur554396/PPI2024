#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    // input:
    // 1 10 3

    // output:
    // 3 6 9

    // [a...b], print out all divisors of c (a < b)

    for(int i = a; i <= b; i++){
        if(i % c == 0)
            cout << i << " ";
    }


    return 0;
}