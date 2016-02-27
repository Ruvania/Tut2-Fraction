#include<iostram>
using namespace std;

class Fraction
{
public:
	int num, denom;
	void add(Fraction, Fraction);
};

void Fraction::add(Fraction x, Fraction y)
{
	num = ((x.num*y.denom) + (x.denom*y.num));
	denom = (x.denom*y.deno);
}

int main()
{
	Fraction addObject;

	return 0;
}


	

