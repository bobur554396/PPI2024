#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        Deque - Double ended queue.

        |R| <- [][][2][4][5][6][7][] -> |R|

        1. add front 4
        2. add back 5
        3. add front 2
        4. add back 6
    */
    deque<int> box;
    box.push_front(4);
    box.push_back(5);
    box.push_front(2);
    box.push_back(6);
    box.push_back(7);

    while(!box.empty()) {
        cout << box.front() << " " << box.back() << endl;
        box.pop_front();
        box.pop_back();
    }

    return 0;
}