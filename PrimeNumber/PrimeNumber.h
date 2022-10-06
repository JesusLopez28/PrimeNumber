#pragma once
#include <iostream>
using namespace std;

class PrimeNumber {
public:
	PrimeNumber (int _number);
	bool prime(int i);
	void print();

private:
	int number;
};

PrimeNumber ::PrimeNumber (int _number){
	this->number = _number;
}

bool PrimeNumber::prime(int n){
	bool condition = false;
	if (n != 1 && n != 0) {
		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				if (n == i) {
					condition = true;
				}
				else {
					condition = false;
					return condition;
				}
			}
		}
	}else {
		condition = false;
	}	
	return condition;
}

void PrimeNumber::print(){
	cout << "Resultado:" << endl;
	for (int i = 1; i <= number; i++) {
		if (prime(i)) cout << i << endl;
	} cout << endl << endl;
}

