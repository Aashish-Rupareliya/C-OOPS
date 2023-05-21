//
//  main.cpp
//  inline fun
//
//  Created by apple on 21/05/23.
//

#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int num) {
    return num * num * num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int multiplicationResult = multiply(number, 5);
    int cubicResult = cube(number);

    cout << "Multiplication Result: " << multiplicationResult << endl;
    cout << "Cubic Result: " << cubicResult << endl;

    return 0;
}
