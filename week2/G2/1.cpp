#include <iostream>

using namespace std;

int main(){

    // - [ ] data type sizeof

    /*
    [0][1][0][0][0][0][0][1] = 1 * 2^0 + 0 * 2^1 + ... = 1
    [0][0][0][0][0][0][1][0] = 0 * 2^0 + 1 * 2^1 + ... = 2
    [0][0][0][0][0][0][1][1] = 1 * 2^0 + 1 * 2^1 + ... = 3
    [0][0][0][0][0][1][0][0] = 0 * 2^0 + 0 * 2^1 + 1 * 2^2 + ... = 4
    [0][0][0][0][0][0][0][1]
    */

    // 1 byte => 8 bit/cell
    // int - 4 bytes => 4 * 8 = 32 bit/cell
    // max value, which can be stored in int data type
    // most left bit will be used for - sign (1 bit) - signed data type
    // rest of the bit (31) will be used for number itself
    // max value: 2 ^ 31 = 2_147_483_648
    // int range: [-2_147_483_648 ... 2_147_483_648]

    int a = -2;
    char c = 'a'; // 'a' => 97 => binary value => 0..1..0..

    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl; // 8 bytes => 8 * 8 = 64 bit/cells
    cout << sizeof(float) << endl; // 4 bytes => 4 * 8 = 32 bit/cells
    cout << sizeof(double) << endl; // 8 bytes => 8 * 8 = 64 bit/cells
    cout << sizeof(char) << endl; // 1 bytes => 1 * 8 = 8 bit/cells
    cout << sizeof(bool) << endl; // 1 bytes => 1 * 8 = 8 bit/cells
    cout << sizeof(string) << endl; // 1 bytes => 1 * 8 = 8 bit/cells


    return 0;
}