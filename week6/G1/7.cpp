#include <iostream>

using namespace std;

int main(){

    // - [ ] find function
    // find(target_string, starting_index=0);

    string s = "my name is kbtu";
    string target = "name";     

    int found = s.find(target);
    
    if(found != -1)
        cout << "FOUND: " << found << endl;
    else 
        cout << "NOT FOUND" << endl;



    return 0;
}