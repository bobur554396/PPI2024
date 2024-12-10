#include <iostream>

using namespace std;

int main(){
    /*
        - [ ] Check for anagram 


        In:
        cbba
        bbac

        Out:
        yes
    */ 
    string s1, s2;
    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // cout << s1 << " " << s2 << endl;
    if(s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}