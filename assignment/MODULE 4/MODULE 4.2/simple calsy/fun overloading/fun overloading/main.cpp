//
//  main.cpp
//  fun overloading
//
//  Created by apple on 21/05/23.
//

#include <iostream>
using namespace std;

// Function to perform addition
int mathOperation(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int mathOperation(int a, int b, int c) {
    return a - b - c;
}

// Function to perform multiplication
double mathOperation(double a, double b) {
    return a * b;
}

// Function to perform division
double mathOperation(double a, int b) {
    return a / b;
}

int main() {
    int num1, num2, num3;
    double num4;

    cout << "Enter two numbers for addition: ";
    cin >> num1 >> num2;
    cout << "Addition Result: " << mathOperation(num1, num2) << endl;

    cout << "Enter three numbers for subtraction: ";
    cin >> num1 >> num2 >> num3;
    cout << "Subtraction Result: " << mathOperation(num1, num2, num3) << endl;

    cout << "Enter two numbers for multiplication: ";
    cin >> num4 >> num2;
    cout << "Multiplication Result: " << mathOperation(num4, num2) << endl;

    cout << "Enter a number and a divisor for division: ";
    cin >> num4 >> num1;
    cout << "Division Result: " << mathOperation(num4, num1) << endl;

    return 0;
}
