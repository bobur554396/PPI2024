#include <iostream>

using namespace std;

int main(){

    int a[] = {5, 2, 3, -1};

    // cout << *(a + 0) << endl; // a[0]
    // cout << *(a + 1) << endl;
    // cout << *(a + 2) << endl;
    // cout << *(a + 3) << endl;

    // sort(start_address, end_address); [start_address, end_address)
    // reverse(start_address, end_address); [start_address, end_address)

    // bubble sort 

    sort(a, a + 4);
    reverse(a, a + 4);

    for(int i = 0; i < 4; i++)
        cout << a[i] << " ";

    return 0;
}