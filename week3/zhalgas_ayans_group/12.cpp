#include <iostream>

using namespace std;

int main(){
    // - [ ] factorial
    /*
    
    !4 = 1 + 2 + 3 + 4 = 24
    */
    

    int n, res = 1;
    cin >> n;

    for(int i = 1; i <= n; i++){
        res *= i; // res = res * i;
    }

    cout << res << endl;



    return 0;
}