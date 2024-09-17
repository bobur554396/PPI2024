#include <iostream>

using namespace std;

int main(){
    // - [ ] string: number of digits
    /*
    input:
    hel96lo7

    output:
    3
    */

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        int code = (int)s[i];
        // cout << code << " ";
        if(code >= 48 && code <= 57)
            cout << s[i] << " ";
    }
    


    return 0;
}