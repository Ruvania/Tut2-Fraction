#include<iostream>
using namespace std;

class Fraction
{
public:
	int num, denom;
	void add(Fraction, Fraction);
	void subtract(Fraction, Fraction);
	void multiply(Fraction, Fraction);
	void fraction();
	void print(Fraction x);
};

void Fraction::fraction()
{
	cout << "Please enter a numerator: ";
	cin >> num;
	cout << "Please enter a denomonator: ";
	cin >> denom;
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

		cout << W << " " << N << "/" << D;
	}
	else cout << N << "/" << D << endl;
}

int main()
{
	Fraction fractionObject1;
	Fraction fractionObject2;
	Fraction addObject;
	Fraction printObject;
	Fraction subtractObject;
	Fraction multiplyObject;

	cout << "Fraction 1:" << endl;
	fractionObject1.fraction();
	cout << "Fraction 2:" << endl;
	fractionObject2.fraction();

	addObject.add(fractionObject1, fractionObject2);
	subtractObject.subtract(fractionObject1, fractionObject2);
	multiplyObject.multiply(fractionObject1, fractionObject2);

	cout << "Addition:" << endl;
	print(addObject);
	cout << "Subtract:" << endl;
	print(subtractObject);
	cout << "Multiply:" << endl;
	print(multiplyObject);

    return 0;
}


	

