#include <iostream>

using namespace std;

int main(){
    // - [ ] Built-in functions
    //     - [ ] sort, reverse
    // sort(start_address, end_address) => [start_address, end_address)

    int a[] = {5, 3, 6, 1};
    string s = "kb4tRu";

    sort(a, a + 4);
    sort(s.begin(), s.end());

    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++)
        cout << s[i] << " ";



    return 0;
}