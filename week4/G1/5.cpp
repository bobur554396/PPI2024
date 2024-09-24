#include <iostream>


using namespace std;

int main(){

    /*
    4
    3 5 1 2
    */

    // - [ ] Sum of all elements int array
    
    
    // Read data from termoinal section
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    cout << sum << endl;

    


    return 0;
}