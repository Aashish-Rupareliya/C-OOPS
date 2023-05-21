//
//  main.cpp
//  calsy cons
//
//  Created by apple on 21/05/23.
//

#include <iostream>
using namespace std;

class Calculator {
private:
    int num1;
    int num2;

public:
    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    int divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    int multiply() {
        return num1 * num2;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator calculator(a, b);

    cout << "Addition: " << calculator.add() << endl;
    cout << "Subtraction: " << calculator.subtract() << endl;
    cout << "Division: " << calculator.divide() << endl;
    cout << "Multiplication: " << calculator.multiply() << endl;

    return 0;
}
