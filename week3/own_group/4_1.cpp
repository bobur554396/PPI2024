#include <iostream>

using namespace std;

int main(){
    // - [ ] Fibonacci sequence (0, 1, 1, 2, 3, 5, …)
    /*
    n1 = 0, n2 = 1
    next = n1 + n2;
    

    0    1    1    2    3    5
    n1   n2  next
    */

    int n;
    cin >> n;
    int n1 = 0, n2 = 1;

    for(int i = 0; i < n; i++){
        if(i < 2){
            cout << i << " ";
        } else {
            int next = n1 + n2;
            cout << next << " ";

            n1 = n2;
            n2 = next;
        }
    }


    return 0;
}