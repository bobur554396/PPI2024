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
        if(s[i] >= '0' && s[i] <= '9'){
            cout << s[i] << " ";
        }
    }

    





    return 0;
}