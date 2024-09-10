#include <iostream>

using namespace std;

int main(){
    // - [ ] printf with floating numbers (M_PI)


    /*
    Usage of the function - printf

    printf(format, **value);

    format: "...%[align].[fraction]..."


    %i - integers
    %f - real numbers
    %c - chars
    %s - strings
    ...

    */   
    double pi = 3.143652;
    printf("%i\n", 10); // cout << 10 << endl;
    printf("%c\n", '#'); 
    printf("%10.3f\n", pi); 
    printf("%0.3f\n", pi); 
    printf("%.2f\n", pi); 




    return 0;
}