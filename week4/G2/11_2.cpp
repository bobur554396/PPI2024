#include <iostream>

using namespace std;

int main(){
    //  - [ ] Linear search of K from given array
    /*
    4
    3 4 8 5
    4
    */

    freopen("input.txt", "r", stdin);

    // Reading section
    int n, k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;


    return 0;
}