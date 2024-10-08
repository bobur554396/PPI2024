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

    int left = 0, right = s.size() - 1;
    
    while(left < right){
        cout << left << " " << right << endl;
        if(s[left] != s[right]){
            cout << "NO" << endl;
            return 0;
        }
        left++;
        right--;
    }

    cout << "YES" << endl;


    return 0;
}