#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // - [ ] if else conditions. If —> return 0, gt, lt

    /*

        if(condition) {
            // list of instructions of "if" block
        }

        if(condition) {
            // list of instructions of "if" block
        }


        if(condition) {
            // list of instructions of "if" block
        } else {
            // list of instructions of "else" block
        }
     */
    
    int a, b;

    cin >> a >> b;

    if(a > b){
        cout << a << endl;
    } else {
        cout << b << endl;
    }


    return 0;
}