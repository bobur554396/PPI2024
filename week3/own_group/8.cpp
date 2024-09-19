#include <iostream>

using namespace std;

int main(){
    // - [ ] string: number of words

    // input:
    // my name is kbtu.

    // output
    // 4

    string s;
    
    getline(cin, s);

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') //if((int)s[i] == 32)
            cnt++;
    }

    cout << cnt + 1 << endl;


    return 0;
}