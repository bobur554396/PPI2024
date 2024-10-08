#include <iostream>

using namespace std;

int main(){
    // - [ ] find - function
    // find(target_string, starting_index=0);

    string s = "my name (is) kbtu.";
    string target = "is";

    int found = s.find(target);
    if(found != string::npos) // (found != -1)
        cout << "Found: " << found << endl;
    else
        cout << "Not found" << endl;



    return 0;
}