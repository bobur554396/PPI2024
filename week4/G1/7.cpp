#include <iostream>


using namespace std;

int main(){

    /*
    4
    3 -5 1 -2
    */

    //  - [ ] Count number of positive numbers in array
    // modes: r - read, w - write
    // r = stdin; w = stdout;
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    // Read data from termoinal section
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