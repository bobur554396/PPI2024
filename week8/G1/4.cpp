#include <iostream>

using namespace std;

int main(){
    // - [ ] Built-in functions
    // - [ ] isalpha, isdigit, isalnum, ispunct

    string s = "k6B12T3$#u";

    int sum = 0;
    for(int i = 0; i < s.size(); i++)
        if(ispunct(s[i])){
            cout << s[i] << " ";
        }

    cout << endl;



    return 0;
}