#include <iostream>
using namespace std;
int Catalan(int);
int Fibonacci(int, int, int);
int Fibonacci(int a, int b, int c)
{
	if (a == 1){
		cout << "Fibonacci number at " << b+1 << " is ";
		return c;
	}
	return Fibonacci(a - 1, c, b + c);
}

int Catalan(int n)
{

	if (n <= 1) return 1;

	int res = 0;
	for (int i = 0; i<n; i++)
		res += Catalan(i)*Catalan(n - i - 1);

	return res;
}
int main()
{
	int select;
	do{
		cout << "1. Do Catalan numbers" << endl << "2. Do Fibonacci numbers (Recursive)" << endl << "0. Quit" << endl
			<< "Enter Selection: ";
		cin >> select;
		if (select == 1){
			int cat;
			cout << "Enter Catalan number to calculate: ";
			cin >> cat;
			cout << "Catalan number at " << cat << " is " << Catalan(cat) << endl;
		}
		if (select == 2){
			int fib;
			cout << "Enter Fibonacci number to calculate: ";
			cin >> fib;
			cout << Fibonacci(fib, 0, 1) << endl;
		}
	
	} while (select != 0);


	system("pause");
	return 0;
}