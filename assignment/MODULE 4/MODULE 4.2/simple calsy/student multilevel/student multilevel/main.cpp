//
//  main.cpp
//  student multilevel
//
//  Created by apple on 21/05/23.
//

#include <iostream>
using namespace std;

class Students {
protected:
    int rollNumber;

public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }
};

class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    void setMarks(int marks1, int marks2) {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }
};

class Result : public Test {
public:
    void displayResult() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;

        int totalMarks = subject1Marks + subject2Marks;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result result;

    int rollNumber, marks1, marks2;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Subject 1 Marks: ";
    cin >> marks1;

    cout << "Enter Subject 2 Marks: ";
    cin >> marks2;

    result.setRollNumber(rollNumber);
    result.setMarks(marks1, marks2);
    result.displayResult();

    return 0;
}
