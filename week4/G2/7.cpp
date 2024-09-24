#include <iostream>

using namespace std;

int main(){
    //   - [ ] Show numbers in odd position/location/index from given array
    /*
    4
    3 4 5 8

    0 1 2 3
    */


    // Reading section
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            cout << a[i] << " ";
        }
    }


    


    return 0;
}