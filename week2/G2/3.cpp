#include <iostream>

using namespace std;

int main(){
    // - [ ] (++, --,)
    // Pre / Post increment / decrement

    int a = 3;

    // a++; // post increment
    // ++a; // pre increment

    // int b = a++;
    int b = ++a;

    int d = a++;
    int c = a++ + ++b - --d; 

    cout << a << " " << b << endl;


    return 0;
}