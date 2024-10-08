#include <iostream>

using namespace std;

int main(){
    // - [ ] Palindrome (yes, no)
    
    /*
        YES - aba abba abbcbba aabaa
        NO - abc abb aab abac

        abba
        l  r

        0  3
        1  2
    */
    string s;
    cin >> s;

    string p = s;

    reverse(s.begin(), s.end());

    if(s == p)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;



    return 0;
}