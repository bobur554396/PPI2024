#include <iostream>

using namespace std;

int main(){

    // - [ ] convert char to number (ascii)
    
    /*
    '5'

    10
     */
    char c;
    cin >> c;

    int num = int(c) - int('0');

    cout << num * 2 << endl;





    return 0;
}