#include <iostream>

using namespace std;

float square(float n); // Function declartion

int main(){
    float f = 4;
    cout << square(f) << endl;

    return 0;
}

// Function defination
float square(float n){
    return n * n;
}
