#include <iostream>

using namespace std;

int main(){

    // printf(format, **values)

    /*

        format:
            - %i - integer values
            - %c - chars
            - %s - string
            - %f - float numbers, real numbers
        
        real numers:
        %[align].[fraction]f
    */

    // printf("value is = %i\n", 10);
    // printf("value is = %i, %c\n", 10, '$');
    // printf("value is = %f\n", 3.146458);
    // printf("%20.3f\n", 3.146458);
    // printf("%0.3f\n", 3.146558);
    printf("%.3f\n", 3.146558);



    return 0;
}