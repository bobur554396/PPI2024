#include <iostream>

using namespace std;

int main(){
    // Prime number
    // 2 3 5 7 11 13 17 ...

    // input:
    // 7
    // ouput:
    // YES

    // input:
    // 15
    // ouput:
    // NO

    // input:
    // 6
    // ouput:
    // NO
    // 2 3 4 5
    // 2 3

    // 7
    // 2 3 4 5 6
    // 
    


    int n, cnt = 0;
    cin >> n;
    // [2...n-1]
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            cnt++;
    }

    if(!cnt) // if(cnt == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;



    


    return 0;
}