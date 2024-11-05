#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        Deque - double ended queue.

        |R| <- [1][3][5][4][][][] -> |R|

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
    box.push_back(7);


    while(!box.empty()) {
        cout << box.front() << " " << box.back() << endl;
        box.pop_front();
        box.pop_back();
    }


    return 0;
}