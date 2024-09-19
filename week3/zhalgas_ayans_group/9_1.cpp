#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    // input:
    // 1 10 3

    // output:
    // 3
    // [a...b], print out all divisors of c (a < b)
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(i % c == 0)
            cnt++;
    }

    cout << cnt << endl;


    return 0;
}