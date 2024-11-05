#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    /*
        Bracket validation

        YES
        (())
        ()()
        ((()))

        NO
        ())
        )(()
        ())(
        (()(
    */
    string s;
    cin >> s;
    // (())

    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') cnt1++;
        if(s[i] == ')') cnt2++;
    }

    if(cnt1 == cnt2)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    

    return 0;
}