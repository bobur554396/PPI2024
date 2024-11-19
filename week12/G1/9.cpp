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
    int a[] = {3, 2, 1};
    sort(a, a + 3);
    reverse(a, a + 3);
    
    do {
        
        cout << a[0] << " " << a[1] <<  " " << a[2] << endl;

    } while(prev_permutation(a, a + 3));



    return 0;
}