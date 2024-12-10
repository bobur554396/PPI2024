#include <iostream>
#include <sstream>

using namespace std;

int main(){
    /*
        - [ ] Identify the longest word in a sentence

        in:
        Hello Identify the longest word in a sentence

        out:
        8
        Identify
    */ 
    string s, word;
    getline(cin, s);

    // while(cin >> s)
    int maxWordLen = 0;
    string maxWord;
    stringstream ss(s);
    while(ss >> word){
        if(word.size() > maxWordLen){
            maxWordLen = word.size();
            maxWord = word;
        }
    }

    cout << maxWordLen << endl << maxWord << endl;





    return 0;
}