class Sets{
public:
	Sets(int);
	void addElement(int i, int index);
	int getElement(int i);
	int getSize();
	bool isSubset(const Sets&);
	bool isProper(const Sets&);
	void printOrderedPairs(const Sets&);
private:
	int size;
	int * array;
};