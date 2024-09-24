#include <iostream>

using namespace std;

int main(){
    // String
    // k3b5tu

    // 3 5

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        int code = (int)s[i];
        if(code >= 48 && code <= 57)
            cout << s[i] << " ";
    }

    return 0;
}