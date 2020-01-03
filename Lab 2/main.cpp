#include <iostream>
#include "Binary.h"
using namespace std;
int main()
{
	int i;
	cout << "enter integer (no negatives): ";
	cin >> i;
	convertBinary(i);
	cout << endl;
	system("pause");
	return 0;
}