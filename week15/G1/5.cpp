#include <iostream>

using namespace std;

int main(){
    // - [ ] Check if array is sorted

    /*
    In:
    4
    1 2 3 4

    Out:
    Yes
    */

    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
        
    



    return 0;
}