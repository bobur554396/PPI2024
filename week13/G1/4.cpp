#include <iostream>

using namespace std;

struct Student {
    string id; // fields/properties
    string name;
    int age;
    float gpa;
};

int main(){
    freopen("in.txt", "r", stdin);

    // - [ ] What is Struct?
    Student s;
    cin >> s.id >> s.name >> s.age >> s.gpa;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;
    


    return 0;
}