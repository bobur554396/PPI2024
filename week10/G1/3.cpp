#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    /*
        Queue - horizontal box.
        FIFO - First In First Out

        |R| <- [3][5][1][][][]

        1. add 3
        2. add 5
        3. add 1
        4. get element = 3, remove
        5. get element = 5, remove
    */
    queue<int> box;
    box.push(3);
    box.push(5);
    box.push(1);

    // cout << box.size() << endl;
    // cout << box.empty() << endl;

    cout << box.front() << " " << box.back() << endl;
    box.pop();
    cout << box.front() << " " << box.back() << endl;
    

    return 0;
}