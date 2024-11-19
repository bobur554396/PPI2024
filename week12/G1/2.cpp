#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    // Library <algorithm>
    // - [ ] fill(begin, end, val)
    vector<int> v(10);

    fill(v.begin(), v.end(), 5);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";




    return 0;
}