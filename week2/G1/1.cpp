#include <iostream>

using namespace std;

int main(){
    // - [ ] data type sizeof

    /*
    
    [0][0][0][0][0][0][0][1] = 1 * 2^0 + 0 * 2^1 + ... = 1
    [0][0][0][0][0][0][1][0] = 0 * 2^0 + 1 * 2^1 + ... = 2
    [0][0][0][0][0][0][1][1] = 1 * 2^0 + 1 * 2^1 + ... = 3
    [0][0][0][0][0][0][0][1]
    
    
    */

    // 1 byte = 8 bit <=> 8 cells

    // int => 4 bytes => 4 * 8 = 32 bit / cells
    // max value for int => 2^31 - 1 (first bit will be used for sign)
    // int range:  [-2_147_483_647 ... 2_147_483_647]

    int a = 2;
    int b = -3;
    int a1 = 20000000;
    char c = 'r'; // 114 => binary => 0...1..0


    cout << sizeof(int) << endl; // 4 bytes => 4 * 8 => 32 bit/cell
    cout << sizeof(long) << endl; // 8 bytes => 8 * 8 => 64 bit/cell
    cout << sizeof(float) << endl; // 4 bytes => 4 * 8 => 32 bit/cell
    cout << sizeof(double) << endl; // 8 bytes => 8 * 8 => 64 bit/cell
    cout << sizeof(char) << endl; // 1 bytes => 1 * 8 => 8 bit/cell
    cout << sizeof(string) << endl; // 24 bytes => 24 * 8 => 192 bit/cell
    cout << sizeof(bool) << endl; // 1 bytes => 1 * 8 => 8 bit/cell

    return 0;
}