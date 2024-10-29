#include <iostream>
#include <vector>

using namespace std;


int main(){
    //  - [ ] Given N and N elements 
    /*
    4
    3 1 5 8
    */

    int n, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";





    return 0;
}