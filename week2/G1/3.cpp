#include <iostream>

using namespace std;

int main(){
    // Post / pre increment / decrement ++, --

    int a = 2;

    a++; // 3 // post increment
    ++a; // 4 // pre increment

    int b = ++a;

    int d = a++;
    int c = ++b + a++ - --d; 

    cout << a << " " << b << endl;


    
    
    

    


    return 0;
}