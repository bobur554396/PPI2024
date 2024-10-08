#include <iostream>
#include <sstream>

using namespace std;

int main(){
    // - [ ] stringstream (string read as: float, int, several params with spaces)
    
    stringstream ss;

    ss << "12" << " hello " << "2.5";

    string s = ss.str();
    
    int a;
    string s2;
    float f;
    ss >> a >> s2 >> f;

    cout << s << endl;

    


    return 0;
}