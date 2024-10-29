#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(7);

    // for(int i = 0; i < v1.size(); i++)
    //     cout << v1[i] << " ";

    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it += 2)
        cout << *it << " ";




    return 0;
}