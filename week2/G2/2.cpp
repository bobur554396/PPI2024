#include <iostream>

using namespace std;

int main(){
    // - [ ] (++, --, +=, -=, *=, /=, %= )
    int a = 2;
    a = 10;

    a += 3; // a = a + 3; // 13
    a *= 2; // a = a * 2; // 26
    a %= 10; // a = a % 10; // 6

    a++; // a = a + 1; <=> a += 1;
    ++a; // a = a + 1; <=> a += 1;

    cout << a << endl;


    return 0;
}