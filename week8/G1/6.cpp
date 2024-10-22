#include <iostream>

using namespace std;

int sum(int a, int b){
    int result = a + b;
    return result;
}

int main(){
    // - [ ] what are functions?

    /*
        Function - it is block of code to solve some subproblem.
        Function - list of instructions to solve subproblem.

        return_type func_name(parameters?){
            body of the function;
        }
    */

    // int r = sum(2, 3);

    cout << sum(2, 3) << endl;
    
    

    return 0;
}