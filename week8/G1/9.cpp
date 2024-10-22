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

int my_max2(int n, int m){
    if(n > m)
        return n;
    else
        return m;
}

int my_max(int n, int m){
    if(n > m){
        return n;
    }
    return m;
}


int main(){
    // - [ ] max of two
    int a, b;
    cin >> a >> b;

    cout << my_max(a, b) << endl;


    

    return 0;
}