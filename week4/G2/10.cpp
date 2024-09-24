#include <iostream>

using namespace std;

int main(){
    //  - [ ] Find Max/Min from given array
    /*
    4
    3 4 8 5
    */

    /*
        freopen(file_path, mode, std)

        mode: "r" - read, "w" - write
        std: stdin, stdout
    */
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Reading section
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int maxi = a[0]; // assume that a[0] is a maximum in given array
    for(int i = 1; i < n; i++){
        if(a[i] > maxi){ // a[3] > maxi => 5 > 8
            maxi = a[i]; // maxi = 8;
        }
    }

    cout << maxi << endl;
    


    return 0;
}