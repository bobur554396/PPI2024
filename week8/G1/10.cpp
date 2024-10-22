#include <iostream>

using namespace std;

int sum(int a, int b); // declare about function

int main(){
    int a, b;
    cin >> a >> b;

    cout << sum(a, b) << endl;

    return 0;
}

int sum(int a, int b){ 
    int result = a + b;
    return result;
}