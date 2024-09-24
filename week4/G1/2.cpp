#include <iostream>


using namespace std;

int main(){

    // - [ ] What is an array?

    /*
        Array - collection in which we can store more than one data with same data type;
        Array - list of many values of one data type.


        int nums[4];
        
        address: 0x.. 0x.. 0x.. 0x..
        values:   [3] [6]  [4]  [3] 
         index:    0   1    2    3
    */

    int nums[4];
    nums[0] = 3;
    nums[1] = nums[0] * 2;
    nums[3] = nums[0] + nums[1];
    nums[2] = 4;

    for(int i = 0; i < 4; i++){
        cout << nums[i] << " ";
    }
    
    
    

    return 0;
}