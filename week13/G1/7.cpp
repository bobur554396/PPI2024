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

bool cmp(int a, int b){
    return a > b;
}

int main(){
    freopen("in.txt", "r", stdin);

    int n;
    cin >> n;
    Student s[n];
    for(int i = 0; i < n; i++){
        s[i].read();
    }

    sort(s, s + n, sortByAgeGPA);
    
    for(int i = 0; i < n; i++){
        s[i].show();
    }
    
    


    return 0;
}