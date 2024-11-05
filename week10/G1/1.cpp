#include <iostream>
#include <stack>

using namespace std;

int main(){
    /*
        Stack - vertical box.
        LIFO - Last In First Out

        1. add 3
        2. add 5
        3. add 1
        4. get element = 1, remove
        5. get element = 5, remove

        []
        []
        []
        [3]
    */
    stack<int> box;
    box.push(3);
    box.push(5);
    box.push(1);

    // cout << box.size() << endl;
    // cout << box.empty() << endl;

    cout << box.top() << endl;
    cout << box.size() << endl;
    box.pop();
    cout << box.size() << endl;
    cout << box.top() << endl;



    return 0;
}