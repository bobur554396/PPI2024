#include <iostream>

using namespace std;

int main(){
    // - [ ] find grade from points example
    // 96.6 = A, 92 = -A, 86 = B+
    
    double n;
    cin >> n;

    if(n >= 95 && n <= 100) {
        cout << "A" << endl;
    } else if(n >= 90) {
        cout << "A-" << endl;
    } else if(n >= 85) {
        cout << "B+" << endl;
    } else if(n >= 80) {
        cout << "B" << endl;
    } else {
        cout << "D" << endl;
    }





    return 0;
}