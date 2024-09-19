#include <iostream>

using namespace std;

int main(){
    //- [ ] The sum of numbers till 0 (cin reads numbers in the loop)

    // input
    // 3 2 5 4 3 0

    // output
    // 3 + 2 + 5 + 4 + 3 = 

    int n, sum = 0;
    for(;;){ // while(true){
        cin >> n;

        sum += n;

        if(n == 0)
            break;
    }

    cout << sum << endl;

    


    return 0;
}