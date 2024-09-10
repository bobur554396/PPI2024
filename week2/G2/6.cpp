#include <iostream>

using namespace std;

int main(){
    // - [x] printf with floating numbers (M_PI)

    /*

        printf(format, **values);

        format:
        %[align].[fraction] - floating numbers


        %i - integer numbers
        %f - real numbers
        %c - chars
        %s - string
        ...
    */

    float pi = 3.146414;

    printf("%i\n", 5); // cout << 5 << endl;
    printf("%c\n", '$'); // cout << '$' << endl;
    printf("%20.2f\n", pi); 
    printf("%0.2f\n", pi); 
    printf("%.2f\n", pi); 


    return 0;
}