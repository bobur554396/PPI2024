#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // - [ ] Math functions (sqrt, abs, sin, max, min, pow)

    float pi = 3.14;

    cout << sqrt(9) << endl;
    cout << sqrt(9.7) << endl; 
    cout << abs(-9) << endl; // |-9| = 9
    cout << sin(90 * pi / 180) << endl;
    cout << cos(90 * pi / 180) << endl;
    cout << tan(45 * pi / 180) << endl;
    cout << 1 / tan(45 * pi / 180) << endl;
    cout << max(2, 5) << endl;
    cout << min(2, 5) << endl;
    cout << min(2, max(-1, -5)) << endl;
    cout << pow(2, -3) << endl; // pow(base, exp)


    cout << M_PI << endl;





    
    

    return 0;
}