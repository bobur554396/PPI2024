#include <iostream>

using namespace std;

int main(){
    
    for(int i = 0; i < 100; i++){
        if(i % 3 == 0)
            continue; // manually skip current iteration

        if(i % 4 == 0)
            cout << i << " ";

        if(i == 50)
            break; // manually stop the loop
    }


    return 0;
}