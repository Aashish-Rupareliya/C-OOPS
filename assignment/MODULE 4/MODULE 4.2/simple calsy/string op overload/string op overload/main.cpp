//
//  main.cpp
//  string op overload
//
//  Created by apple on 21/05/23.
//

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;

public:
    MyString(const char* s = nullptr) {
        if (s == nullptr) {
            str = new char[1];
            str[0] = '\0';
        } else {
            int length = strlen(s);
            str = new char[length + 1];
            strcpy(str, s);
        }
    }

    ~MyString() {
        delete[] str;
    }

    MyString operator+(const MyString& other) {
        int length1 = strlen(str);
        int length2 = strlen(other.str);
        int newLength = length1 + length2;

        char* newStr = new char[newLength + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);

        MyString result(newStr);
        delete[] newStr;

        return result;
    }

    void displayString() {
        cout << "String: " << str << endl;
    }
};

int main() {
    MyString string1("Hello");
    MyString string2(" World");

    MyString concatenated = string1 + string2;

    cout << "Concatenated String:" << endl;
    concatenated.displayString();

    return 0;
}
