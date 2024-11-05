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
    
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            cnt++;
        } else {
            cnt--;
            if(cnt < 0){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    if(cnt == 0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    

    return 0;
}