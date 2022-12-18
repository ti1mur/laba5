#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

struct complex_number {
	double Imz;
	double Rez;
	double Angle;
	double Absolute;

	void Print() {
		if (Imz >= 0) {
			cout << Rez << " + " << Imz << 'i' << endl;
		}
		else {
			cout << Rez << Imz << 'i' << endl;
		}
	}
};
void algebraic_form(complex_number number) {
	number.Rez = cos(number.Angle * PI / 180);
	number.Imz = sin(number.Angle * PI / 180) ;
	if (number.Imz >= 0) {
		cout << number.Absolute * number.Rez << " + " << number.Absolute * number.Imz << "i" << endl;
	}
	else{
		cout << number.Absolute * number.Rez << number.Absolute * number.Imz << "i" << endl;
	}
}
complex_number conjugate_number(complex_number number) {
	complex_number result;
	result.Imz = -number.Imz;
	result.Rez = number.Rez;
	return result;
}
complex_number multiplication(complex_number number1, complex_number number2) {
	complex_number result;
	result.Rez = number1.Rez * number2.Rez - number1.Imz * number2.Imz;
	result.Imz = number1.Rez * number2.Imz + number1.Imz * number2.Rez;
	return result;
}
complex_number division(complex_number number1, complex_number number2) {
	complex_number result;
	complex_number conjugate_number2 = conjugate_number(number2);
	double denominator = pow(number2.Rez, 2) + pow(number2.Imz, 2);
	result.Rez = multiplication(number1, conjugate_number2).Rez / denominator;
	result.Imz = multiplication(number1, conjugate_number2).Imz / denominator;
	return result;
}
int main() {
	complex_number z1,z2,z3;
	z1.Imz = 3.0;
	z1.Rez = 2.0;
	z2.Imz = 8.0;
	z2.Rez = -2.0;
	z3.Absolute = 4;
	z3.Angle = 45;
	cout << z3.Absolute << " * e^(" << z3.Angle << " * " << "i) = ";
	algebraic_form(z3);
	cout << "z1 = ";
	z1.Print();
	cout << "z2 = ";
	z2.Print();
	complex_number conjugate_z1 = conjugate_number(z1);
	cout << "conjugate_z1 =";
	conjugate_z1.Print();
	complex_number multi = multiplication(z1, z2);
	cout << "z1 * z2 =";
	multi.Print();
	complex_number div = division(z1,z2);
	cout << "z1 / z2 =";
	div.Print();
	return 0;
}
