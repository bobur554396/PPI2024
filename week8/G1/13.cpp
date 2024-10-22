#include <iostream>

using namespace std;

bool isPalindrom(string s){
    int left = 0, right = s.size() - 1;
    while(left < right){
        if(s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    // - [ ] isPalindrom
    string s;
    cin >> s;

    if(isPalindrom(s))
        cout << "YES\n";
    else
        cout << "NO" << endl;




    return 0;
}
