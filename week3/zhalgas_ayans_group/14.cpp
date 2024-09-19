#include <iostream>

using namespace std;

int main(){
    /*
    input:
    he3l45lo

    output:
    3 4 5
    */

    string s;
    cin >> s;

    // kbtu
    // 0123

    for(int i = 0; i < s.size(); i++){
        // cout << (int)s[i] << " ";
        int code = (int)s[i];
        if(code >= 48 && code <= 57){
            cout << s[i] << " ";
        }
    }

    





    return 0;
}