#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;


int main(){
    /*
    - [ ] What is Map?
    Key / Value container
    */

    map<string, int> m;
    m["24B111"] = 4;
    m["24B222"] = 5;
    m["24B333"] = 4;
    m["24B222"] = 10;
    
    pair<string, int> a("24B000", 7);
    
    m.insert(a);


    // cout << m.size() << endl;
    // cout << m["24B222"] << endl;

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        // it is address of "pair"
        cout << it->first << " " << it->second << endl;
    }










    return 0;
}