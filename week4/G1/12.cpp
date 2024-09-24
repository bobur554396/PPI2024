#include <iostream>


using namespace std;

int main(){

    //     - [ ] Show all digits from string

    // kb3t4u

    // 3 4

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        int code = (int)s[i];
        if(code >= 48 && code <= 57)
            cout << s[i] << " ";
    }



    return 0;
}