#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // - [ ] find grade from points example

    double n;
    cin >> n;

    if(n >= 95) {
        cout << "A" << endl;
    } 
    if(n >= 90 && n < 95) { // logic AND &&;   logic OR ||
        cout << "A-" << endl;
    }


    return 0;
}