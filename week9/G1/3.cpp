#include <iostream>
#include <vector>

using namespace std;

// comparator
bool cmp(int a, int b){
    if(a > b)
        return true;
    return false;
}

bool cmp1(int a, int b){
    return a > b;
}

int main(){
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(1);
    v1.push_back(6);

    sort(v1.begin(), v1.end(), cmp1);
    // reverse(v1.begin(), v1.end());


    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";









    return 0;
}