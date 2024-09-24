#include <iostream>

using namespace std;

int main(){
    //   - [ ] Count number of positive numbers in array
    /*
    4
    -3 4 -8 5
    */


    // Reading section
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0)
            cnt++;
    }

    cout << cnt << endl;


    


    return 0;
}