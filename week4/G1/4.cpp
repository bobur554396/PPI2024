#include <iostream>


using namespace std;

int main(){

    /*
    4
    3 5 1 2
    */

    //  - [ ] Read N number and show them
    
    
    // Read data from termoinal section
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Your logic for solution


    // Output the result of problem
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    


    return 0;
}