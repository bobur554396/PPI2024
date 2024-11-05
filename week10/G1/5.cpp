#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        Deque - double ended queue.

        |R| <- [][3][5][][][][] -> |R|

        1. push_front 3
        2. push_back 5
        3. push_front 1
        4. push_back 4
    */
    deque<int> box;
    box.push_front(3);
    box.push_back(5);
    box.push_front(1);
    box.push_back(4);

    // cout << box.size() << endl;
    // cout << box.empty() << endl;

    cout << box.front() << " " << box.back() << endl;
    box.pop_front();
    cout << box.front() << " " << box.back() << endl;
    box.pop_back();
    cout << box.front() << " " << box.back() << endl;

    return 0;
}