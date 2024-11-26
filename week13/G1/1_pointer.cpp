#include <iostream>

using namespace std;

int main(){
    // Pointer?
    // int a[] = {1, 2, 3};
    // cout << *a << endl;

    int a = 2;
    int *b = &a;
    // cout << &a << " " << b << endl;

    *b = 5;

    cout << a << endl;

    // cout << *b << endl;

    


    return 0;
}