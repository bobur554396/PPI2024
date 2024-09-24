#include <iostream>


using namespace std;

int main(){

    //     - [ ] Show all digits from string

    // kb3t4u

    // 3 4

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9')
            cout << s[i] << " ";
    }



    return 0;
}