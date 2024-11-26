#include <iostream>

using namespace std;

int main(){
    // Pointer?
    int a[3] = {0};

    int *p = a;
    *p = 2;

    p++;
    *p = 5;

    p++;
    *p = -1;

    for(int *it = a; it != (a + 3); it++)
        cout << *it << " ";


    // for(int i = 0; i < 3; i++)
    //     cout << a[i] << " ";
    // cout << endl;
    
    


    return 0;
}