#include <iostream>

using namespace std;

struct Student {
    string id; // fields/properties
    string name;
    int age;
    float gpa;

    void read() { // methods/functions
        cin >> id >> name >> age >> gpa;
    }
    void show() {
        cout << id << " " << name << " " << age << " " << gpa << endl;
    }
};

bool sortByAge(Student s1, Student s2){
    return s1.age < s2.age;
    // if(s1.age < s2.age)
    //     return true;
    // return false;
}

bool sortByAgeGPA(Student s1, Student s2){
    if(s1.age == s2.age){
        return s1.gpa < s2.gpa;
    }
    return s1.age < s2.age;
}

void findByName(Student s[], int n, string _name){
    bool found = false;
    for(int i = 0; i < n; i++){
        if(s[i].name == _name){
            s[i].show();
            found = true;
        }
    }
    if(!found)
        cout << "Not found\n";
}

void filterByGPA(Student s[], int n, float _gpa){
    for(int i = 0; i < n; i++){
        if(s[i].gpa >= _gpa){
            s[i].show();
        }
    }
}

void filterByGPAOrder(Student s[], int n, float _gpa, string order){
    for(int i = 0; i < n; i++){
        if(order == "more"){
            if(s[i].gpa >= _gpa){
                s[i].show();
            }
        }
        if(order == "less"){
            if(s[i].gpa < _gpa){
                s[i].show();
            }
        }
    }
}