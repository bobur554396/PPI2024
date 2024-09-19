#include <iostream>

using namespace std;

int main(){
    // - [ ] Find the sum of digits of a given number
    // 123

    /*
    1234

    1) n % 10 = 4; n = n / 10 = 123;
    2) n % 10 = 3; n = n / 10 = 12;
    3) n % 10 = 2; n = n / 10 = 1;
    4) n % 10 = 1; n = n / 10 = 0;
    */

    int n, sum = 0; 
    cin >> n;

    while(n > 0){
        int k = n % 10;
        sum += k;
        n /= 10; // n = n / 10;
    }
    
    cout << sum << endl;





    return 0;
}