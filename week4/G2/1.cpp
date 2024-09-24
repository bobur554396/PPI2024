#include <iostream>

using namespace std;

int main(){
    /*
    - [ ] What is an array?

        Array - is collecion of values from one data type.

        Creation:

        data_type var_name[size];

        int a[4];
        address:     0x..  0x..  0x..  0x..
         values:     [3]   [5]   [2]   [15]
        indexes:      0     1     2     3

    */

    int a[4];
    a[0] = 3;
    a[1] = a[0] + 2; // 5
    a[3] = a[1] * a[0]; // 5 * 3 = 15
    a[2] = 2;
    // a[4] = 5; out of range index

    cout << *(a + 0) << endl; // cout << a[0] << endl;
    cout << *(a + 1) << endl; // cout << a[1] << endl;
    cout << *(a + 2) << endl; // cout << a[2] << endl;
    cout << *(a + 3) << endl; // cout << a[3] << endl;

    
    
    
    
    


    return 0;
}