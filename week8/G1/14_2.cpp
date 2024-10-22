#include <iostream>

using namespace std;


void read(int &base, int &exp){ // take address of base = &base
    cin >> base >> exp;
}

float my_pow(int base, int exp){ // 2^-3 = 1 / 2^3
    float res = 1;

    for(int i = 0; i < abs(exp); i++){
        res *= base;
    }
    if(exp < 0)
        return 1 / res;
    return res;
}


int main(){
    // - [ ] Power => pow(base, exp);
    // pow(2, 3) = 2 ^ 3 = 1 * 2 * 2 * 2 = 8
    int base, exp;

    read(base, exp);

    cout << my_pow(base, exp) << endl;

    return 0;
}
