#include <iostream>

using namespace std;

void show2(){
    cout << "Message from Show 2\n";
}

void show(){
    cout << "Line 1\n";
    cout << "Line 2\n";
    show2();
    cout << "Line 3\n";
    cout << "Line 4\n";
}

int main(){

    // What is Recursion? 
    // It is a function, which calls itself.
    show();

    cout << "End of main function\n";

    return 0;
}

/*
Stack
[]
[]
[]
[<end_main>]
*/