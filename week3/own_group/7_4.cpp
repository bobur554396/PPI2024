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
        if(s[i] >= '0' && s[i] <= '9')
            cnt++;
    }

    cout << cnt << endl;
    

    return 0;
}