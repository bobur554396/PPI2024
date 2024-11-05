#include <iostream>
#include <stack>

using namespace std;

int main(){
    /*
        Stack - vertical box.
        LIFO - Last In First Out

        1. add 4
        2. add 5
        3. add 2
        4. get item // 2, delete
        5. get item // 5, delete

        []
        []
        [5]
        [4]
    */
    stack<int> box;
    box.push(4);
    box.push(5);
    box.push(2);

    // cout << box.size() << endl;
    // cout << box.empty() << endl;

    cout << box.top() << endl;
    box.pop();
    cout << box.size() << endl;
    cout << box.top() << endl;



    return 0;
}