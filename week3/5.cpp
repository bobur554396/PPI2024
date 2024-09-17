#include <iostream>

using namespace std;

int main(){
    // - [ ] factorial
    // !4 = 1 * 2 * 3 * 4 = 24
    
    // 1 + 2 + 3 + 4 = 10
    // int sum = 0;
    // sum += i;
    
    int n;
    cin >> n;

    /*
    1) 1 * 1
    2) 1 * 2 = 2
    3) 2 * 3 = 6
    4) 6 * 4 = 24
    */

    int res = 1;

    for(int i = 1; i <= n; i++){
        res *= i; // res = res * i;
    }

    cout << res << endl;

    


    return 0;
}