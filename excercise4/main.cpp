// main.cpp

#include "matrix.cpp"
#include <iostream>

int main() {
    Matrix m1, m2;

    int arr1[4][4] = {
        {1, 4, 6, 7},
        {2, 5, 5, 5},
        {3, 2, 8, 9},
        {4, 3, 2, 1}
    };

    int arr2[4][4] = {
        {7, 9, 9, 1},
        {3, 2, 1, 1},
        {8, 8, 8, 8},
        {2, 1, 0, 1}
    };

    cout << "Macierz m1:\n";
    m1.set(arr1);
    m1.print();

    cout << "Macierz m2:\n";
    m2.set(arr2);
    m2.print();

    cout << "Dodanie macierzy m2 do m1:\n";
    m1.add(m2.get());
    m1.print();

    cout << "Odjęcie macierzy m2 od m1:\n";
    m1.subtract(m2.get());
    m1.print();

    int multiplier = 2;
    cout << "Pomnozenie macierzy m2 przez " << multiplier << ":\n";
    m2.multiplyBy(multiplier);
    m2.print();

    cout << "Pomnozenie macierzy m1 przez m2:\n";
    m1.multiply(m2.get());
    m1.print();
}