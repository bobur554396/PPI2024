#include <iostream>

using namespace std;

long factorial(long n){
    long res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}


int main(){
    // - [ ] factorial
    // 4! = 1 * 2 * 3 * 4
    long n;
    cin >> n;

    cout << factorial(n) << endl;



    return 0;
}
