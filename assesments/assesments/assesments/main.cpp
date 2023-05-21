//
//  main.cpp
//  assesments
//
//  Created by apple on 21/05/23.
//

#include <iostream>
#include <string>
using namespace std;

class Lecturer {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLecturers;

public:
    Lecturer() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numLecturers = 0;
    }

    void assignInitialValues(string name, string subject, string course, int num) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numLecturers = num;
    }

    void addLectureDetails() {
        string lectureName;
        cout << "Enter lecture name: ";
        cin.ignore();
        getline(cin, lectureName);
        cout << "Lecture details added for: " << lectureName << endl;
    }

    void displayDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lecturers: " << numLecturers << endl;
    }
};

int main() {
    Lecturer lecturer;
    string name, subject, course;
    int num;

    cout << "Enter lecturer name: ";
    getline(cin, name);
    cout << "Enter subject name: ";
    getline(cin, subject);
    cout << "Enter course name: ";
    getline(cin, course);
    cout << "Enter number of lecturers: ";
    cin >> num;

    lecturer.assignInitialValues(name, subject, course, num);

    lecturer.addLectureDetails();

    lecturer.displayDetails();

    return 0;
}
