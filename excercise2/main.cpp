#include <iostream>

class Fibonacci {
    public:
    int iloscLiczb = 0;

    Fibonacci() {
        std::cout << "Jestem sobie bezparametrowym konstruktorem\n";
    }

    Fibonacci(const Fibonacci &fibonacci) {
        this->iloscLiczb = fibonacci.iloscLiczb;
    }

    Fibonacci(int iloscLiczb) {
        this->iloscLiczb = iloscLiczb;
    }

    void Wypisz() {
        long long a = 0, b = 1;

        for(int i = 0; i < this->iloscLiczb; i++) {
            if(i == 0) {
                std::cout << "0 ";
            } else {
                std::cout << b << " ";
                b += a;
                a = b - a;
            }
        }

        std::cout << "\n";
    }
};

int main() {
    Fibonacci bezParametrowy;
    Fibonacci *kilkaLiczb = new Fibonacci(20);
    kilkaLiczb->Wypisz();
    Fibonacci kopiaKilkaLiczb(*kilkaLiczb);
    kopiaKilkaLiczb.Wypisz();

    return 0;
}