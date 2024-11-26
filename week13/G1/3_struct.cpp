#include <iostream>

using namespace std;

struct Student {
    string id; // fields/properties
    string name;
    int age;
    float gpa;
};

int main(){
    // - [ ] What is Struct?
    int a;
    a = 2;
    Student s;
    s.id = "24B111";
    s.name = "Student 1";
    s.age = 20;
    s.gpa = 3.7;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;
    


    return 0;
}