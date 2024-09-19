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

    int cnt = 0;

    for(int i = 0; i < s.size(); i++) {
        int code = (int)s[i];
        if(code >= 48 && code <= 57)
            cnt++;
    }

    cout << cnt << endl;
    


    return 0;
}