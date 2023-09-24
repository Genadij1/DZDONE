#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Drib
{
private:
	int numerator1 = 0;
	int denominator1 = 0;
	int numerator2 = 0;
	int denominator2 = 0;

public:
	void setNumerator1(int numerator1)
	{
		this->numerator1 = numerator1;
	};
	void setDenominator1(int denominator1)
	{
		this->denominator1 = denominator1;
	};
	void setNumerator2(int numerator2)
	{
		this->numerator2 = numerator2;
	};
	void setDenominator2(int denominator2)
	{
		this->denominator2 = denominator2;
	};

	int getNumerator1()const { return numerator1; };
	int getDenominator1()const { return denominator1; };
	int getNumerator2()const { return numerator2; };
	int getDenominator2()const { return denominator2; };

	void sum()
	{
		if (denominator1 == denominator2)
		{
			cout << "Sum: " << numerator1 + numerator2 << "/" << denominator1 << endl;
		}
		else
		{
			cout << "Sum: " << numerator1 * denominator2 + numerator2 * denominator1 << "/" << denominator1 * denominator2 << endl;
		}
	}

	void sub()
	{
		if (denominator1 == denominator2)
		{
			cout << "Sub: " << numerator1 - numerator2 << "/" << denominator1 << endl;
		}
		else
		{
			cout << "Sub: " << numerator1 * denominator2 - numerator2 * denominator1 << "/" << denominator1 * denominator2 << endl;
		}
	}

	void mult()
	{
		cout << "Mult: " << numerator1 * numerator2 << "/" << denominator1 * denominator2 << endl;
	}

	void div()
	{
		cout << "Div: " << numerator1 * denominator2 << "/" << denominator1 * numerator2 << endl;
	}

	void print()
	{
		cout << "First fraction: " << numerator1 << "/" << denominator1 << endl;
		cout << "Second fraction: " << numerator2 << "/" << denominator2 << endl;
	}
};



