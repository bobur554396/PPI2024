#include <iostream>

using namespace std;

int main(){
    // - [ ] infinity loop
    
    for(int i = 0; ; i++){
        if(i == 20){
            break; // manually stop current loop
        }
        
        if(i % 3 == 0){
            continue; // manually skip current interation, jump to the next one
        }

        cout << i << " ";
    }

    cout << "hi" << endl;





    return 0;
}