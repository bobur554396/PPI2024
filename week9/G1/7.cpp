#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main(){
    /*
    - [ ] What is Set?
    Unique elements container; Automatically will sort items;
    */

    set<int> s;
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(1);

    s.erase(4);
    s.erase(s.begin());
    
    // cout << s.size() << endl;

    // s.clear();

    // cout << (s.size() == 0) << endl;
    // cout << s.empty() << endl;

    // cout << *s.begin()  << endl;

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++)
        cout << *it << " "; 









    return 0;
}