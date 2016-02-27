#include<iostream>
using namespace std;

class Fraction
{
public:
	int num, denom;
	void add(Fraction, Fraction);
	void subtract(Fraction, Fraction);
	void multiply(Fraction, Fraction);
	void divide(Fraction, Fraction);
	void fraction();
	void print(Fraction x);
};

void Fraction::fraction()
{
	cout << "Please enter a numerator:";
	cin >> num;
	cout << "\n" << endl;
	cout << "Please enter a denomonator:";
	cin >> denom;
	cout << "\n" << endl;
}

void Fraction::add(Fraction x, Fraction y)
{
	num = ((x.num*y.denom) + (x.denom*y.num));
	denom = (x.denom*y.denom);
}

void Fraction::subtract(Fraction x, Fraction y)
{
	num = ((x.num*y.denom) - (x.denom*y.num));
	denom = (x.denom*y.denom);
}

void Fraction::multiply(Fraction x, Fraction y)
{
	num = (x.num*y.num);
	denom = (x.denom*y.denom);
}

void Fraction::divide(Fraction x, Fraction y)
{
	num = (x.num*y.denom);
	denom = (y.num*x.denom);
}

void print(Fraction x)
{
	int N, D;
	int W, z;

	N = x.num;
	D = x.denom;

	if (N > D)
	{

		W = N / D;
		z = W*D;
		N = N - z;

		cout << W << " " << N << "/" << D << "\n" << endl;
	}
	else cout << N << "/" << D <<"\n"<< endl;
}

int main()
{
	Fraction fractionObject1;
	Fraction fractionObject2;
	Fraction addObject;
	Fraction printObject;
	Fraction subtractObject;
	Fraction multiplyObject;
	Fraction divideObject;

	cout << "Fraction 1:\n"<< endl;
	fractionObject1.fraction();
	cout << "Fraction 2:\n" << endl;
	fractionObject2.fraction();

	addObject.add(fractionObject1, fractionObject2);
	subtractObject.subtract(fractionObject1, fractionObject2);
	multiplyObject.multiply(fractionObject1, fractionObject2);
	divideObject.divide(fractionObject1, fractionObject2);

	cout << "*****************\n" << endl;

	cout << "Addition:" << endl;
	print(addObject);
	cout << "Subtract:" << endl;
	print(subtractObject);
	cout << "Multiply:" << endl;
	print(multiplyObject);
	cout << "Divide:" << endl;
	print(divideObject);

    return 0;
}


	

