#include <iostream>

using namespace std;

int main(){
    // Prime number
    // 1 2 3 5 7 11 13 17 19 23 20

    int n;
    cin >> n;

    bool flag = true; // assume that given number is prime
    for(int i = 2; i < n; i++){ // i <= n - 1;
        if(n % i == 0){
            flag = false; // found divider => n is not prime
        }
    }   

    if(flag == true) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }





    return 0;
}