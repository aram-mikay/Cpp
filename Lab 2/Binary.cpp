#include "Binary.h"
#include <iostream>
using namespace std;
void convertBinary(int i)
{
	if (i < 0)
	{
		cout << "No Negatives" << endl;
	}
	else{
		if (i / 2 != 0) {
			convertBinary(i / 2);
		}
		printf("%d", i % 2);
	}
}