//
//  main.cpp
//  SORTING ARRAY
//
//  Created by apple on 22/05/23.
//

#include <iostream>
using namespace std;

template<typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template<typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    int intArray[SIZE] = { 5, 2, 8, 1, 3 };
    double doubleArray[SIZE] = { 4.5, 2.1, 9.8, 1.2, 3.7 };

    cout << "Before sorting (int array): ";
    displayArray(intArray, SIZE);
    sortArray(intArray, SIZE);
    cout << "After sorting (int array): ";
    displayArray(intArray, SIZE);

    cout << "Before sorting (double array): ";
    displayArray(doubleArray, SIZE);
    sortArray(doubleArray, SIZE);
    cout << "After sorting (double array): ";
    displayArray(doubleArray, SIZE);

    return 0;
}
