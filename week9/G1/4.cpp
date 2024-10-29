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
    //  vector.erase(start_address);
    //  vector.erase(start_address, end_address); [start_address, end_address)
    
    // v1.erase(v1.begin() + 2);
    v1.erase(v1.begin() + 2, v1.begin() + 4);

    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";









    return 0;
}