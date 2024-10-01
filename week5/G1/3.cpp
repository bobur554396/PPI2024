#include <iostream>

using namespace std;

int main(){

    // 2D arrays
    /*

    data_type var_name[size_rows][size_columns]

    [4][2][5]
    [9][1][7]
    [3][2][6]
    */ 

    bool ok[3][4];

    // int a[3][3];
    int a[3][3] = {
        {4, 2, 5},
        {9, 1, 7},
        {3, 2, 6}
    };

    a[2][1] = a[0][0] * 2;

    cout << a[0][0] << endl;
    cout << a[1][2] << endl;
    cout << a[2][1] << endl;

    
    
    
    


    

    return 0;
}