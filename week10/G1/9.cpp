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

        []
        []
        [(]
        [(]

    */
    string s;
    cin >> s;

    stack<char> box;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            box.push('(');
        } else {
            if(box.empty()){
                cout << "NO" << endl;
                return 0;
            }
            box.pop();
        }
    }

    if(box.empty())
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;


    

    return 0;
}