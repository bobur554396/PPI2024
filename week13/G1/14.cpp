#include <iostream>

using namespace std;

void show(int n){
    if(n == 0) // base case
        return; 

    cout << n << " ";
    show(n - 1);
        
}
/*
3 2 1

1) show(3); 
2) show(2); 
3) show(1); 
4) show(0); 

*/

int main(){
    // - [ ] show numbers from 1 till n / reverse: from n till 1
    int n;
    cin >> n;
    // for(int i = n; i >= 1; i--)
    //     cout << i << " ";

    show(n);

    return 0;
}
