#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    string studentID;

public:
    void setStudentID(string id) {
        studentID = id;
    }

    void displayStudentID() {
        cout << "Student ID: " << studentID << endl;
    }
};

class UniversityStudent : public Student {
private:
    string course;

public:
    void setCourse(string c) {
        course = c;
    }

    void displayDetails() {
        displayPersonDetails();
        displayStudentID();
        cout << "Course: " << course << endl;
    }
};

int main() {
    UniversityStudent student1;

    student1.setPersonDetails("Leila", 21);
    student1.setStudentID("2500703499");
    student1.setCourse("Computer Engineering");

    cout << "University Student Details" << endl;
    student1.displayDetails();

    return 0;
}
