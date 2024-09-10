#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    // - [x] bit manipulation, or, xor, and, >>, <<, |=, &=, ^=, ~ (bitset; to_string)
    /*
        AND: & - think as multiplication *
        OR: | - think as sum +
        XOR: 
            - when the values are same => result is = 0
            - when the values are different => result is = 1
        INV: ~ - switching all bits to opposite
    */

    int a = 2;
    int b = 3;
    bitset<4> b1 = a;
    bitset<4> b2 = b;

    // int c = a & b;
    // int c = a | b;
    int c = a ^ b;
    bitset<4> b3 = c;

    bitset<4> b4 = ~c;

    a &= b; // a = a & b;
    a |= b; // a = a & b;


    cout << b1 << endl << b2 << endl << b3 << endl << b4 << endl;






    return 0;
}