#include <iostream>

using namespace std;

int main(){
    // - [ ] can you draw triangle a, b, c (with nested condition, bool var)

    int a, b, c;
    cin >> a >> b >> c;

    if(a + b > c){
        if(a + c > b){
            if(b + c > a){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }  else {
            cout << "NO" << endl;
        }
    }  else {
        cout << "NO" << endl;
    }
        


    return 0;
}