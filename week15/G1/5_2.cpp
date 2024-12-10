#include <iostream>

using namespace std;

bool isSorted(int a[], int n){
    for(int i = 1; i < n; i++){
        if(a[i] < a[i - 1]){
            return false;
        }
    }
    return true;
}

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
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    if(isSorted(a, n))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;


    return 0;
}