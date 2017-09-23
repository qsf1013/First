#include "../../include/headers.h"

void EuclidGCDTest(int a, int b)
{
	int d = EuclidGCD(a, b);
	printf("GCD of %d and %d is %d\n", a, b, d);
}