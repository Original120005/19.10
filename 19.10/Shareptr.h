#pragma once
#include <iostream>
using namespace std;

template<class A>
class Shareptr {
	A* number;
	int counter;

public:
	Shareptr() {
		number = 0;
		number = nullptr;
		counter = 0;
	}

	Shareptr(A* n) {
		number = n;
		counter = 1;
	}
Shareptr(Shareptr<A>& mhp) {

		number = mhp.number;
		counter++;
	}

	~Shareptr() {
		delete[] number;
	}

	A* GetAdress() {
		cout << "adress: " << number << endl;
		return number;
	}

	int GetCount() {
		return counter;
	}

};
