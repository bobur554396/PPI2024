#include <iostream>

using namespace std;

int main(){
    /*
    4
    3 5 1 2

    11
    */

    int n, b, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> b;
        sum += b; // sum = sum + b; // sum = sum + b
    }
    
    cout << sum << endl;








    return 0;
}