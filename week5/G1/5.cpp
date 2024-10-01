#include <iostream>

using namespace std;

int main(){
    /*
    - [ ] max element in matrix 
    
    in:
    3
    4 2 5
    1 3 9
    3 2 6

    out:
    9 2 3

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

    int maxi = a[0][0], row = 0, col = 0; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // if(i == 0 && j == 0)
            //     continue;
            if(a[i][j] >= maxi){ //  && i != 0 && j != 0
                maxi = a[i][j];
                row = i;
                col = j;
            }
        }
    }

    cout << maxi << " " << row + 1 << " " << col + 1 << endl;






 

    


    

    return 0;
}