#include <iostream>

using namespace std;

int main(){
    // - [ ] count all dividers of N

    // 10: [1-10] [1 2 3 4 5 6 7 8 9 10] => 1 2 5 10 => 4

    int n;
    cin >> n;
    
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cnt++; // cnt = cnt + 1;
        }
    }

    cout << cnt << endl;

    








    return 0;
}