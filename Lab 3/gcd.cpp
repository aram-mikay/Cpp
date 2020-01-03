#include "gcd.h"
int denominator(int a, int b){
	if (b == 0)
	{
		return a;
	}
	else if (a > 0 && b > 0){
		denominator(b, a % b);
	}
	
}