#include <iostream>
#include "gcd.h"
using namespace std;
int main(){
	int a, b;

		cout << "Enter two numbers a>0 and b>0: ";
		cin >> a >> b;
		if (a > 0 && b > 0)
		{
			cout << "GCD = " << denominator(a, b) << endl;
			
		}
		else
			cout << endl << "Bad Input..." << endl;

	system("pause");
	return 0;
}