/*
 * Quadratic.h
 *
 *  Created on: Jun 29, 2016
 *      Author: Graham Preston
 */

#ifndef QUADRATIC_H_
#define QUADRATIC_H_

#include <vector>

class Quadratic {
private:
	int a, b, c;
	std::vector<int> factors;
public:
	Quadratic(int aC, int bC, int cC);
	void getWorkingFactors(int workingFactors[]);
	std::vector<int> factorEquation();
};

#endif /* QUADRATIC_H_ */