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
    // 1 2 3 4 5 6
    // 1 2 3 4 6

    // 10
    // 1 2 5 10
    


    int n, cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            cnt++;
    }

    if(cnt == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;



    


    return 0;
}