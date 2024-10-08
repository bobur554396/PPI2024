#include <iostream>

using namespace std;

int main(){
    /*
    - [ ] symmetric matrix
    
    in:
    3
    2 3 4
    3 7 8
    4 8 9

    out:
    YES  

    in:
    3
    2 3 4
    3 7 8
    3 8 9

    out:
    NO    

    00 01 02
    10 11 12
    20 21 22
    */

    freopen("in.txt", "r", stdin);

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    

    return 0;
}