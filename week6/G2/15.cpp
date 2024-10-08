#include <iostream>

using namespace std;

int main(){
    // - [ ] Palindrome (yes, no)
    
    /*
        YES - aba abba abbcbba aabaa
        NO - abc abb aab abac

        abcba
        0 - 4
        1 - 3
    */
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] == s[s.size() - 1 - i])
            cnt++;
    }

    if(cnt == s.size() / 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    


    return 0;
}