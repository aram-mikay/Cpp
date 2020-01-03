/*Aram Mikayelian
CSIS 137 - FALL 2O17
HW #2 - INTEGERSET*/

#ifndef INTEGERSETREDO_H
#define	INTEGERSETREDO_H

class IntegerSet
{

private:
	char *set = nullptr;
	int numSize;


public:
	IntegerSet(int);
	void unionOfSets(const IntegerSet &, const IntegerSet &);
	void intersectionOfSets(const IntegerSet &, const IntegerSet &)const;
	void insertElement()const;
	void deleteElement(int)const;
	void printSet()const;
	bool isEqual(const IntegerSet &)const;
	~IntegerSet();
};


#endif
