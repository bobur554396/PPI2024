#include <iostream>

using namespace std;

int main(){
    // - [ ] Prefix sum of array elements 

    /*
    In:
    5
    1 2 3 4 5

    Out:
    1 3 6 10 15

    1 2 3 4 5
    1 3
    */
    
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        cout << sum << " ";    
    }
    
    
    



    return 0;
}