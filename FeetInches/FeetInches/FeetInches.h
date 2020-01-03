#ifndef FEETINCHES_H
#define FEETINCHES_H


class FeetInches
{

private:	
	int feet = 0;
	int inches = 0;
	

public:
	FeetInches(int, int);
	FeetInches();
	~FeetInches();
	void setFeet(int);
	void setInches(int);
	int getFeet()const;
	int getInches()const;
	void decimalForm();
	void printSize()const;
	bool checkMeasure(const int &, const int &in);
	void simpleMeasure(int *, int *);
	

	
};


#endif