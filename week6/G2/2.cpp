#include <iostream>

using namespace std;

int main(){
    // String

    char c = 'a';
    string s1 = "kbtu";

    string s2(" site"); // s2 = " site";

    s1 += s2; // merge two strings 

    string s3 = s1; // copy value of s1 into s3;

    cout << (s1 == s2) << endl;
    cout << s1.size() << " " << s1.length() << endl;
    cout << s1 << endl;

    for(int i = 0; i < s1.size(); i++)
        cout << s1[i] << " ";

    return 0;
}