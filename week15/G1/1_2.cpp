#include <iostream>
#include <map>

using namespace std;

int main(){
    // - [ ] Duplicate elements in the array
    /*
    5
    2 3 4 3 4
    2

    2 1
    3 2
    4 2
    */

    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]]++;
    }

    int cnt = 0;
    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        // cout << it->first << ": "<< it->second << endl;
        if(it->second == 2)
            cnt++;
            // cout << it->first << " ";
    }

    cout << cnt << " ";
        
    return 0;
}