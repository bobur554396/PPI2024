#include <iostream>

using namespace std;


int cnt = 0;
void show(){
    cnt++;
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
    // Recursion - is function which calls itself.
    // Base case - when function must be finished.

    show();


    return 0;
}
/*

Error - Stack overflow

Stack - Memory Limit
    []
    [<end_show>]
    [<end_show>]
    [<end_show>]
    [<end_main>]

*/