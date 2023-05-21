//
//  main.cpp
//  oprator overloading
//
//  Created by apple on 21/05/23.
//

#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int* data;

public:
    Matrix(int n) {
        size = n;
        data = new int[size];
    }

    ~Matrix() {
        delete[] data;
    }

    void inputMatrix() {
        cout << "Enter the elements of the matrix: ";
        for (int i = 0; i < size; i++) {
            cin >> data[i];
        }
    }

    Matrix operator+(const Matrix& other) {
        Matrix result(size);

        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    void displayMatrix() {
        cout << "Matrix: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Matrix 1:" << endl;
    matrix1.inputMatrix();

    cout << "Matrix 2:" << endl;
    matrix2.inputMatrix();

    Matrix sum = matrix1 + matrix2;

    cout << "Sum of the matrices:" << endl;
    sum.displayMatrix();

    return 0;
}
