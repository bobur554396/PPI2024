#include <iostream>

using namespace std;

int main(){
    // Pointer - variable where I can store address of some data type.
    int a = 2;
    int *p = &a;
    // cout << &a << endl;
    // cout << *p << endl;
    *p = 4;

    cout << a << endl;

    return 0;
}