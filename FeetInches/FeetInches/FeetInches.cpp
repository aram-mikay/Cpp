#include <iostream>
#include "FeetInches.h"

using namespace std;

FeetInches::FeetInches(int ft, int in)
{	
		feet = ft;
		inches = in;	
}

FeetInches::FeetInches()
{
	feet = 0;
	inches = 0;		
}

FeetInches::~FeetInches()
{

}

bool FeetInches::checkMeasure(const int &ft, const int &in)
{
	int ftCheck = false;
	int inCheck = false;

	if (ft < 0 || in < 0)
	{
		ftCheck = true;
		inCheck = true;
	}

	return ftCheck, inCheck;
}

void FeetInches::simpleMeasure(int *ft, int *in)
{

	if (*in == 12)
	{
		*ft += 1;
		setFeet(*ft);
		setInches(0);
	}
	else if (*in > 12)
	{
		int remain = 0;

		*ft += *in / 12;
		remain = *in % 12;

		setFeet(*ft);
		setInches(remain);

	}
	else
	{
		setFeet(*ft);
		setInches(*in);
	}

}

void FeetInches::decimalForm()
{
	cout << "The decimal measurement is: " << getFeet() << "." << getInches() << " ft" << endl;
}

void FeetInches::setFeet(int ft)
{
	if (ft < 0)
	{
		ft = 0;
	}
	else
	{
		feet = ft;
	}
	
}

void FeetInches::setInches(int in)
{
	if (in < 0)
	{
		inches = 0;
	}
	else
	{
		inches = in;
	}
	
}

int FeetInches::getFeet()const
{
	return feet;
}

int FeetInches::getInches()const
{
	return inches;
}

/*void FeetInches::simpleMeasure()
{
	if (inches == 12)
	{
		feet += 1;
		setFeet(feet);
		setInches(0);
	}
	else if (inches > 12)
	{
		int remain = 0;

		feet += inches / 12;
		remain = inches % 12;

		setFeet(feet);
		setInches(remain);
		
	}

	}*/