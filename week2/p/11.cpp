#include <iostream>

using namespace std;

int main(){
    //- [ ] all numbers which divisible by N in range [a, b] (a < b)
    
    int a, b, n;
    cin >> a >> b >> n;

    for(int i = a; i <= b; i++){
        if(i % n == 0){
            cout << i << " ";
        }
    }







    return 0;
}