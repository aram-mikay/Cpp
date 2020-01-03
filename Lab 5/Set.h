const int MAX_SIZE = 20;
class Sets{
public:
	Sets(int);
	Sets();
	void addElement(int i, int index);
	int getElement(int i);
	int getSize();
	bool addElementValidation(int element, int index);
	bool isSubset(Sets&);
	bool isProper(Sets&);
	void printOrderedPairs(Sets&);
	void unionOps(Sets&);
	void intersection(Sets&);
	void printSet();

private:
	int size;
	int array[MAX_SIZE];

};