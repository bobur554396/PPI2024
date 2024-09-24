#include <iostream>


using namespace std;

int main(){

    string s;
    cin >> s;

    cout << s.size() << endl;

    // string s1 = "kbtu";
    // char c[] = {'k', 'b', 't', 'u'};

    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }



    return 0;
}