#include <iostream>

using namespace std;

int cnt = 0;

void show(){
    cnt++;
    cout << cnt << endl;
    if(cnt == 1000) // base case
        return;
    cout << "Line 1\n";
    cout << "Line 2\n";
    show();
    cout << "Line 3\n";
    cout << "Line 4\n";
}

int main(){
    // What is Recursion? 
    // It is a function, which calls itself.
    // Base case - when function must be finished

    show();

    return 0;
}

/*
error - Stack Overflow

Stack
[]
[<end_show>]
[<end_show>]
[<end_show>]
[<end_show>]
*/