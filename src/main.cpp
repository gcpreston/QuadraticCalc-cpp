//============================================================================
// Name        : QuadraticCalc
// Author      : Graham Preston
// Version     : 1.0
// Description : A quadratic factoring calculator
//============================================================================

#include <iostream>
#include <vector>
#include "Quadratic.h"
using namespace std;

int main() {
	cout << endl << "******************************" << endl;
	cout << "QUADRATIC FACTORING CALCULATOR" << endl;
	cout << "******************************" << endl;

	bool again = true;
	while (again) {
		int a, b, c;

		cout << endl << "Enter a, then b, then c (ax^2 + bx + c):" << endl;
		cin >> a >> b >> c;

		Quadratic quad(a, b, c);
		vector<int> eq = quad.factorEquation();

		cout << endl << "Answer: " << endl;
		if (eq[0] == 0)
			cout << "Not factorable." << endl;
		else {
			cout << "(" << eq[0] << "x ";
			if (eq[1] < 0)
				cout << "- " << eq[1] * -1 << ")";
			else
				cout << "+ " << eq[1] << ")";
			cout << "(" << eq[2] << "x ";
			if (eq[3] < 0)
				cout << "- " << eq[3] * -1 << ")" << endl;
			else
				cout << "+ " << eq[3] << ")" << endl;
		}

		cout << endl << "Again? y/n" << endl;
		string choice;
		cin >> choice;
		if (choice != "y")
			again = false;
	}

	return 0;
}