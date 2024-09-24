#include <iostream>

using namespace std;

int main(){
    //   - [ ] Show indexes of odd numbers
    /*
    4
    3 4 8 5

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
        if(a[i] % 2 == 1)
            cout << i << " ";
    }


    


    return 0;
}