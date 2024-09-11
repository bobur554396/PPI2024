#include <iostream>

using namespace std;

int main(){
    // - [ ] if else conditions. If —> return 0, gt, lt

    /*
        1.        
        if(condition) {
            // instructions of "if" block
        }

        2.
        if(condition) {
            // instructions of "if" block
        } else {
            // instructions of "else" block
        }

        3.
        if(condition) {
            // instructions of "if" block
        } else if(condition) {
            // instructions of "else" block
        } else if(condition) {
            // instructions of "else" block
        } else {
            // instructions of "else" block
        }
    */

    int a, b;
    cin >> a >> b;

    if(a > b) {
        cout << a << endl;
    }

    if(b > a) {
        cout << b << endl;
    }


    return 0;
}