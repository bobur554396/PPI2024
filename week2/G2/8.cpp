#include <iostream>
#include <bitset>

using namespace std;

int main(){
    // - [ ] <<, >>

    /*
        << - Shift bits to the left side
        >> - Shift bits to the right side
    */

    int a = 2; // 0010

    // bitset<4> b1 = (a << 1);
    bitset<4> b1 = (a >> 1);

    cout << b1 << endl;
 

    return 0;
}