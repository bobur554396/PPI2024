#include <iostream>

using namespace std;

int main(){
    // input:
    // 2 1 4 3 6 0

    // output
    // 2+1+4+3+6 = 16

    int n, sum = 0;
    for(;;){
        cin >> n;

        sum += n; // sum = sum + n;

        if(n == 0)
            break; // manually stop current loop
    }

    cout << sum << endl;



    return 0;
}