#include <iostream>
#include "Shareptr.h"
using namespace std;

int main() {

	Shareptr<int> num1(new int(7);
	Shareptr<int> num2(num1);

	num1.GetAdress();

	num2.GetAdress();

	cout << num1.GetCount() << endl;

}