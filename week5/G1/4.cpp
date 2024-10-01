#include <iostream>

using namespace std;

int main(){
    /*
    in:
    3
    4 2 5
    9 1 7
    3 2 6

    out:
    4 2 5
    9 1 7
    3 2 6


    00 01 02
    10 11 12
    20 21 22
    */

    freopen("in.txt", "r", stdin);

    // Read data
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    // Your logic of solution


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }    

    


    

    return 0;
}