#include <iostream>


using namespace std;

int main(){

    /*
    4
    1 5 3 2
    3
    */

    // - [ ] Linear search of K from given array
    
    freopen("input.txt", "r", stdin);
    
    // Read data from termoinal section
    int n, k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    
    bool flag = false; // assume that K is not in the array
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            flag = true;
        }
    }

    if(flag == false)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;



    return 0;
}