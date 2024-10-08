#include <iostream>

using namespace std;

int main(){
    // - [ ] s.begin(), s.end() -- addresses

    string s = "my name (is) kbtu.";

    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());

    cout << s << endl;


    return 0;
}