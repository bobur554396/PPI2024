#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void show_number(int n){
    cout << n << " ";
}


/*
1) 2, 2, 4, 4, 4, 7
2) 2, 4, 7, 4, 4, 7
         |
*/

int main(){
    // Library <algorithm>
    // - [ ] unique(begin, end)
    int a[] = {2, 2, 4, 4, 4, 7};
    vector<int> v(a, a + 6);

    vector<int>::iterator begin = v.begin();
    vector<int>::iterator bound = unique(v.begin(), v.end());

    while(begin != bound){
        cout << *begin << " ";
        begin++;
    }
    cout << endl;
    
    for_each(v.begin(), v.end(), show_number);



    return 0;
}