#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    string name;

public:
    Student(string n) {
        name = n;
    }

    virtual void displayActivity() {
        cout << name << " is studying." << endl;
    }
};

// Derived class 1
class EngineeringStudent : public Student {
public:
    EngineeringStudent(string n) : Student(n) {
    }

    void displayActivity() override {
        cout << name << " is working on an engineering project." << endl;
    }
};

// Derived class 2
class ComputerStudent : public Student {
public:
    ComputerStudent(string n) : Student(n) {
    }

    void displayActivity() override {
        cout << name << " is writing a computer program." << endl;
    }
};

int main() {
    EngineeringStudent student1("Leila");
    ComputerStudent student2("Leila");

    Student* ptr;

    ptr = &student1;
    ptr->displayActivity();

    ptr = &student2;
    ptr->displayActivity();

    return 0;
}
