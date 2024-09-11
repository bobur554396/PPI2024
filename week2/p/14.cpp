#include <iostream>

using namespace std;

int main(){
    // Prime number
    // 1 2 3 5 7 11 13 17 19 23 20

    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cnt++; // cnt = cnt + 1;
        }
    }

    if(cnt == 2){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    








    return 0;
}