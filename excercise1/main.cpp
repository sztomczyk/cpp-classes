#include <iostream>

using namespace std;

class WithoutParameters {
	public:
	WithoutParameters() {
		cout << "Jestem bezparametrowym konstruktorem \n";
	}
};

class OneParameter {
	public:
	OneParameter(int parameter) {
		cout << "Jestem jednoparametrowym konstruktorem \n";
		cout << "Moj parametr ma wartosc: " << parameter << "\n";
	}
};

class TwoParameters {
	public:
	TwoParameters(int parameter1, int parameter2) {
		cout << "Jestem dwuparametrowym konstruktorem \n";
		cout << "Moje parametry maja wartosci: ";
		cout << parameter1 << " " << parameter2 << "\n";
	}
};

class PrimeNumber {
	public:
	bool static isPrime(int number) {
		if(number < 2)
			return false;

		for(int i = 2; i*i <= number; i++)
			if(number%i == 0)
				return false;

		return true;
	}

	void static writePrimes(int start, int n) {
		int c = 0;

		while(c != n) {
			if(isPrime(start)) {
				cout << start << " ";
				c++;
			}

			start++;
		}

		cout << "\n";
	}
};

int main() {
	WithoutParameters wp;
	OneParameter op(5);
	TwoParameters tp(1, 2);

	int number;
	cout << "\nWprowadz liczbe: "; cin >> number;

	if(PrimeNumber::isPrime(number))
		cout << "Liczba jest pierwsza\n";
	else
		cout << "Liczba nie jest pierwsza\n";

	int start, n;
	cout << "\nWprowadz liczbe startowa: "; cin >> start;
	cout << "Wprowadz ilosc liczb pierwszych: "; cin >> n;
	PrimeNumber::writePrimes(start, n);
}