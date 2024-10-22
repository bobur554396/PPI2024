#include <iostream>

using namespace std;

int main(){
    // - [ ] Built-in functions
    // - [ ] isalpha, isdigit, isalnum, ispunct

    string s = "k6B12T3$#u";

    int sum = 0;
    for(int i = 0; i < s.size(); i++)
        if(isdigit(s[i])){
            sum += s[i] - '0';
        }

    cout << sum << endl;



    return 0;
}