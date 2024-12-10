#include <iostream>

using namespace std;

int main(){
    //  - [ ] Find two elements in the array that add up to a given number S

    /*
    In:
    5
    3 4 2 6 1
    6

    1 2 3 4 6
    |       |

    Out:
    2 6
    */
    int n, s;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> s;

    sort(a, a + n);
    int left = 0;
    int right = n - 1;

    while(left != right){
        int sum = a[left] + a[right];
        if(sum == s){
            cout << "Pair: " << a[left] << " " << a[right] << endl;
            return 0;
        } else if(sum > s){
            right--;
        } else if(sum < s){
            left++;
        }
    }

    cout << "No pair\n";


    


    return 0;
}