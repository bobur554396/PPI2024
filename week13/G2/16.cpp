#include <iostream>

using namespace std;


void show(int n){
    if(n == 0)
        return;
    show(n - 1);
    cout << n << " ";
}

/*


1) show(4); [cout << 4;]
2) show(3); [cout << 3; cout << 4;]
3) show(2); [cout << 2; cout << 3; cout << 4;]
4) show(1); [cout << 1; cout << 2; cout << 3; cout << 4;]
5) show(0);

*/


int main(){
    // 4
    // 1 2 3 4
    int n;
    cin >> n;

    show(n);



    return 0;
}
