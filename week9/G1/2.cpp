#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
        - [ ] What is Vector?

        Dynamic array

        vector<data_type> var_name(size?);
    */

    // vector<int> v2(5);
    // int a[] = {4, 3, 5, 1};

    // vector<int> v3(a, a + 4);
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(1);
    v1.push_back(6);

    cout << v1.front() << " " << v1.back() << endl;
    cout << v1[0] << " " << v1[v1.size() - 1] << endl;
    cout << *v1.begin() << " " << *(v1.end() - 1) << endl;

    // cout << v1.size() << endl;

    // v1.clear();
    // cout << v1.empty() << endl;

    // cout << v1[0] << endl;
    // cout << v1[1] << endl;
    // cout << v1.at(2) << endl;

    

    // for(int i = 0; i < v1.size(); i++)
    //     cout << v1[i] << " ";
    //     // cout << v1.at(i) << " ";









    return 0;
}