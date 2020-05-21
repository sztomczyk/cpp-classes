// matrix.cpp

#include "matrix.h"
#include <iostream>

using namespace std;

void Matrix::set(int arr[4][4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matrix[i][j] = arr[i][j];
        }
    }
}

int* Matrix::get() {
    return *matrix;
}

void Matrix::print() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
}

void Matrix::add(int* arr) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matrix[i][j] += arr[(i * 4) + j];
        }
    }
}

void Matrix::subtract(int* arr) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matrix[i][j] -= arr[(i * 4) + j];
        }
    }
}

void Matrix::multiply(int* arr) {
    int h[4][4];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j ++) {
            h[i][j] =
                (matrix[i][0] * arr[(0 * 4) + j]) +
                (matrix[i][1] * arr[(1 * 4) + j]) +
                (matrix[i][2] * arr[(2 * 4) + j]) +
                (matrix[i][3] * arr[(3 * 4) + j]);
        }
    }

    Matrix::set(h);
}

void Matrix::multiplyBy(int val) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matrix[i][j] *= val;
        }
    }
}