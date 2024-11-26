#include <iostream>

using namespace std;


void show(int n){
    if(n == 0)
        return;
    cout << n << " ";
    show(n - 1);
}

/*
4 3 2 1

1) show(4);
2) show(3);
3) show(2);
4) show(1);
5) show(0);

*/


int main(){
    // 4
    // 4 3 2 1
    int n;
    cin >> n;

    show(n);



    return 0;
}
