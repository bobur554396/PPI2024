#include <iostream>

using namespace std;

int main(){

    // Loops

    int n;
    cin >> n;

    for(int i = n; i > 0; i--){
        if(i % 2 == 1){
            cout << i << " ";
        }
    }



    return 0;
}