#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void show_number(int n){
    cout << n << " ";
}


int main(){
    // Library <algorithm>
    // - [ ] fill(begin, end, val)
    // - [ ] for_each(begin, end, function)
    vector<int> v(10);

    fill(v.begin(), v.end(), 5);
    for_each(v.begin(), v.end(), show_number);

    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";




    return 0;
}