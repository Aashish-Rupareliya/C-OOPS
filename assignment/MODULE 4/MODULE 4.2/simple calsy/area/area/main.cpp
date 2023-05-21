//
//  main.cpp
//  area
//
//  Created by apple on 21/05/23.
//

#include <iostream>
using namespace std;

const double PI = 3.14159;

// Function to calculate the area of a rectangle
double calculateArea(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, int) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double length, breadth, base, height, radius;

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << calculateArea(length, breadth) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << calculateArea(base, height, 0) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << calculateArea(radius) << endl;

    return 0;
}

