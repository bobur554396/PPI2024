#include <iostream>

using namespace std;

int main(){
    // - [ ] Duplicate elements in the array
    /*
    In:
    5
    2 3 3 4 4

    Out:
    2
    */
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i - 1]){
            cnt++;
        }
    }

    cout << cnt << endl;
    
    


    return 0;
}