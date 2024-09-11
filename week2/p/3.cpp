#include <iostream>

using namespace std;

int main(){
    // - [ ] even odd example

    int n;
    cin >> n;

    // even: 2 4 6 8 100, odd: 3 5 9 13 99

    if(n % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }




    return 0;
}