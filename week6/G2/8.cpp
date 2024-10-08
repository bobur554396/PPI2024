#include <iostream>

using namespace std;

int main(){
    // - [ ] find - function
    // find(target_string, starting_index=0);

    string s = "my name (is) name kbnametu.";
    string target = "name";

    int cnt = 0;
    int found = s.find(target);

    while(found != -1){
        cnt++;
        found = s.find(target, found + target.size());
    }

    cout << cnt << endl;



    return 0;
}