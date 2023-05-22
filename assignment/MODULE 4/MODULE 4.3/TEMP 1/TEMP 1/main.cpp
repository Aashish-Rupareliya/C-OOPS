//
//  main.cpp
//  TEMP 1
//
//  Created by apple on 22/05/23.
//

#include <iostream>
using namespace std;

template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    double decimal1, decimal2;
    char char1, char2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    swapValues(num1, num2);
    cout << "After swapping: " << num1 << ", " << num2 << endl;

    cout << "Enter two decimal numbers: ";
    cin >> decimal1 >> decimal2;
    swapValues(decimal1, decimal2);
    cout << "After swapping: " << decimal1 << ", " << decimal2 << endl;

    cout << "Enter two characters: ";
    cin >> char1 >> char2;
    swapValues(char1, char2);
    cout << "After swapping: " << char1 << ", " << char2 << endl;

    return 0;
}

