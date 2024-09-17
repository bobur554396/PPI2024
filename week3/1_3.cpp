#include <iostream>

using namespace std;

int main(){
    // - [ ] can you draw triangle a, b, c (with nested condition, bool var)

    int a, b, c;
    cin >> a >> b >> c;

    bool ok = false;
    if(a + b > c){
        if(a + c > b){
            if(b + c > a){
                cout << "YES" << endl;
                ok = true;
            }
        }
    }
    
    if(!ok) // if(ok == false)
        cout << "NO" << endl;
        


    return 0;
}