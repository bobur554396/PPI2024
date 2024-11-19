#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

void show(int n){
    cout << n << " ";
}

int main(){
    // - [ ] next_permutation, prev_permutation
    // Lexicographical order

    /*
    1 2 3
    1 3 2
    2 1 3
    2 3 1
    3 1 2
    3 2 1

    !3 = 6
    */
    // int a[] = {1, 2, 3};
    int a[] = {2, 3, 1, 4};
    sort(a, a + 4);    
    
    do {
        
        cout << a[0] << " " << a[1] <<  " " << a[2] <<  " " << a[3] << endl;

    } while(next_permutation(a, a + 4));



    return 0;
}