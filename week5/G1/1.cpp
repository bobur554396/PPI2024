#include <iostream>

using namespace std;

int main(){
    int n = 3;
    int m = 5;

    // Nested loops
    // n ^ 2
    for(int i = 0; i < n; i++){
        cout << "i = " << i << endl;
        for(int j = 0; j < m; j++){
            cout << "j = " << j << " ";

            for(int k = 0; k < 4; k++){
                cout << k << " ";
            }
            
        }
        cout << endl;
    }



    

    return 0;
}