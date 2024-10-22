#include <iostream>

using namespace std;

float square(float n){
    return n * n;
}

void hello(){
    cout << "hi" << endl;
}

void greeing(string name){
    cout << "Hello " << name << "!\n";
}

int main(){
    // float f = 4;
    // cout << square(f) << endl;
    // hello();
    string s;
    cout << "Enter your name...\n";
    cin >> s;

    greeing(s);

    return 0;
}
