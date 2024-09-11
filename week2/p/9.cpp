#include <iostream>

using namespace std;

int main(){
    // - [ ] infinity loop
    
    for(int i = 0; ; i++){
        cout << i << " ";
        if(i == 1000){
            break; // manually stop current loop
        }
    }





    return 0;
}