#include <iostream>

using namespace std;

int main(){
    //     - [ ] Read N number and show them
    /*
    4
    3 2 5 1
    */


    // Reading section
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    // Your logic for problem solution


    // Output section
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    


    return 0;
}