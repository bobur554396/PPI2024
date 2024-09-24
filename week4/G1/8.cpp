#include <iostream>


using namespace std;

int main(){

    /*
    4
    1 -5 3 -2
    */

    //   - [x] Find max from given array
    
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    // Read data from termoinal section
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int maxi = a[0]; // assume that first element of array is max
    for(int i = 1; i < n; i++){
        if(a[i] > maxi) { // 1 > 1
            maxi = a[i]; // maxi = 3;
        }
    }

    cout << maxi << endl;



    return 0;
}