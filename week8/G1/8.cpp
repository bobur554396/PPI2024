#include <iostream>

using namespace std;

int sum(int a, int b){ // a, b = parameters; a = 2; b = 3;
    int result = a + b; // result = local variable 
    return result;
}

float square(float n){ // n = parameter; n = 4;
    return n * n;
}

void greeting(string name){
    cout << "Hello " << name << "!\n"; 
}


int main(){
    string s;
    cout << "Enter your name...\n";
    cin >> s;

    int f = square(4);

    greeting(s);

    

    return 0;
}