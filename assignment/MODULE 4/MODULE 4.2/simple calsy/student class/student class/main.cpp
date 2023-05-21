//
//  main.cpp
//  student class
//
//  Created by apple on 21/05/23.
//

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void initialize() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void readData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    void inputPercentage() {
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayPercentage() {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    void inputSalary() {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displaySalary() {
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Student Details:" << endl;
    student.initialize();
    student.inputPercentage();

    cout << endl << "Teacher Details:" << endl;
    teacher.initialize();
    teacher.inputSalary();

    cout << endl << "Student Information:" << endl;
    student.readData();
    student.displayPercentage();

    cout << endl << "Teacher Information:" << endl;
    teacher.readData();
    teacher.displaySalary();

    return 0;
}
