#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // - [ ] find grade from points example

    double n; // 84.3
    cin >> n;

    if(n >= 95) {
        cout << "A" << endl;
    } else if (n >= 90) {
        cout << "A-" << endl;
    } else if(n >= 85) {
        cout << "B+" << endl;
    } else {
        cout << "F" << endl;
    }


    return 0;
}