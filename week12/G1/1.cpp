#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// bool isDivisibleByFour(int n){
//     if(n % 4 == 0)
//         return true;
//     return false;
// }

bool isDivisibleByFour(int n){
    return n % 4 == 0;
}

int my_count_if(vector<int>::iterator begin, vector<int>::iterator end){
    int cnt = 0;
    while(begin != end){
        if(isDivisibleByFour(*begin)) 
            cnt++;
        begin++;
    }
    return cnt;
}


int main(){
    // Library <algorithm>
    // sort(begin, end, function<cmp>)
    // count_if(begin, end, function)
    int a[] = {3, 4, 3, 24};
    int res1 = count_if(a, a + 4, isDivisibleByFour);

    vector<int> v(a, a + 4);
    int res2 = count_if(v.begin(), v.end(), isDivisibleByFour);
    int res3 = my_count_if(v.begin(), v.end());

    cout << res1 << " " << res2 << " " << res3 << endl;





    return 0;
}