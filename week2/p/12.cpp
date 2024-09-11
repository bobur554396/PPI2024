#include <iostream>

using namespace std;

int main(){
    // - [ ] show all dividers of N

    // 10: [1-10] 1 2 3 4 5 6 7 8 9 10

    int n;
    cin >> n;
    
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }






    return 0;
}