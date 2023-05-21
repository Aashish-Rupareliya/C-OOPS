//
//  main.cpp
//  friend fun
//
//  Created by apple on 21/05/23.
//

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int num) {
        value = num;
    }

    friend void swapNumbers(Number& num1, Number& num2);
    void displayNumber() {
        cout << "Number: " << value << endl;
    }
};

void swapNumbers(Number& num1, Number& num2) {
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Number number1(num1);
    Number number2(num2);

    cout << "Before swapping:" << endl;
    number1.displayNumber();
    number2.displayNumber();

    swapNumbers(number1, number2);

    cout << "After swapping:" << endl;
    number1.displayNumber();
    number2.displayNumber();

    return 0;
}
