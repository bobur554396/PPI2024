#include <iostream>

using namespace std;

int main(){
    // Prime number
    // 1 2 3 5 7 11 13 17 19 23 20

    int n;
    cin >> n;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cout << "no" << endl;
            return 0; // manually stop the program
        }
    }   

    cout << "yes" << endl;



    return 0;
}