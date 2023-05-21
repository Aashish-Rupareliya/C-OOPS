//
//  main.cpp
//  friend fun 2
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

    friend int findMax(Number num1, Number num2);
};

int findMax(Number num1, Number num2) {
    return (num1.value > num2.value) ? num1.value : num2.value;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Number number1(num1);
    Number number2(num2);

    int maxNumber = findMax(number1, number2);

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}
