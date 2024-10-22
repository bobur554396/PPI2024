#include <iostream>

using namespace std;

int sum(int a, int b){ // a, b = parameters; a = 2; b = 3;
    int result = a + b; // result = local variable 
    return result;
}

float square(float n){ // n = parameter
    return n * n;
}

int main(){
    int aa = 2, bb = 3; // local variables inside the "main" function
    cout << sum(aa, bb) << endl; // sum(2, 3);

    float f = 4;
    cout << square(f) << endl;
    

    return 0;
}