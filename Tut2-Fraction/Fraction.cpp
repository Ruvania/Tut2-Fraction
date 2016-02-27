//Name: Ruvania Naicker
//Student Number: 214521716
//Computer Methods 3: Tutorial 2 - Fractions

#include<iostream>
using namespace std;

class Fraction //Class created 
{
public: //Functions declared 
	int num, denom;
	void add(Fraction, Fraction);
	void subtract(Fraction, Fraction);
	void multiply(Fraction, Fraction);
	void divide(Fraction, Fraction);
	void fraction();
	void print(Fraction x);
};

void Fraction::fraction()  //Input values 
{
	cout << "Please enter a numerator: ";
	cin >> num;
	cout << "\n" << endl;
	cout << "Please enter a denomonator: ";
	cin >> denom;
	cout << "\n" << endl;
}

void Fraction::add(Fraction x, Fraction y) //Add fractions
{
	num = ((x.num*y.denom) + (x.denom*y.num));
	denom = (x.denom*y.denom);
}

void Fraction::subtract(Fraction x, Fraction y) //Subtract fractions
{
	num = ((x.num*y.denom) - (x.denom*y.num));
	denom = (x.denom*y.denom);
}

void Fraction::multiply(Fraction x, Fraction y) //Multiply fractions
{
	num = (x.num*y.num);
	denom = (x.denom*y.denom);
}

void Fraction::divide(Fraction x, Fraction y) //Divide fractions
{
	num = (x.num*y.denom);
	denom = (y.num*x.denom);
}

void print(Fraction x) //Prints output in mixed number form
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
	Fraction fractionObject1; //Objects created
	Fraction fractionObject2;
	Fraction addObject;
	Fraction printObject;
	Fraction subtractObject;
	Fraction multiplyObject;
	Fraction divideObject;

	//Calling functions
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
	cout << "Subtraction:" << endl;
	print(subtractObject);
	cout << "Multiplication:" << endl;
	print(multiplyObject);
	cout << "Division:" << endl;
	print(divideObject);

    return 0;
}


	

