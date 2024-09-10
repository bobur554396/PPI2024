#include <iostream>
#include <bitset>

using namespace std;

int main(){
    // - [ ] bit manipulation, or, xor, and, >>, <<, |=, &=, ^=, ~ (bitset; to_string)

    /*
    */

    int a = 2;
    int b = 3;

    bitset<4> b1 = a;
    bitset<4> b2 = b;

    // int c = a & b; // bitwise AND (*) 0010
    // int c = a | b; // bitwise OR (+) 
    int c = a ^ b; // bitwise XOR 
    bitset<4> b3 = c;
    bitset<4> b4 = ~a; // INV

    a &= b; // a = a & b;

    cout << b1 << endl << b2 << endl << b3 << endl << b4 << endl;


    return 0;
}