#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    // - [x] bit manipulation, or, xor, and, >>, <<, |=, &=, ^=, ~ (bitset; to_string)
    /*
        >> - shifting bits to the right side
        << - shifting bits to the left side
    */

    int a = 3; // 0011
    bitset<4> b1 = a; // 0010

    int b = (a >> 1); 
    bitset<4> b2 = b;

    cout << b1 << endl << b2 << endl;







    return 0;
}