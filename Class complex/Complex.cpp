#include "Complex.h"
#include <iostream>
#include <math.h>
using namespace std;
int cN[2];

int main() {
	complex1 z(5, 4);
	complex1 z1(7, -12);
	complex1 z2;
	double z3;
	z2 = z * 5.0;
	printcomplex1(z2);
	z2 = z + z1;
	printcomplex1(z2);
	z2 = z / z1;
	printcomplex1(z2);
	z2 = z - z1;
	printcomplex1(z2);
	z2 = z * z1;
	printcomplex1(z2);

	complex1 test;
	z2 = test.Sum(z1, z);
	cout << "sum=";
	printcomplex1(z2);

	z2 = test.Umnoj(z, z1);
	cout << "umnoj=";
	printcomplex1(z2);
	
	z2 = test.Delen(z, z1);
	cout << "Delen=";
	printcomplex1(z2);

	z2 = test.Deg(z, z1);
	cout << "deg=";
	printcomplex1(z2);

	z2 = test.Exp(z);
	cout << "exp=";
	printcomplex1(z2);

	z2 = test.Ln(z);
	cout << "ln=";
	printcomplex1(z2);

	z2 = test.Cos(z);
	cout << "cos=";
	printcomplex1(z2);

	z2 = test.Sin(z);
	cout << "sin=";
	printcomplex1(z2);
	
	z2 = test.Deg1(z, z1);
	cout << "stepen' 2 =";
	printcomplex1(z2);

	z2 = test.Root(z);
	cout << "Koren'=";
	printcomplex1(z2);

	/*privet test1;
	test1.sayPrivet();*/
	return 0;
}


