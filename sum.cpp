#include "sum.h"

int sum(int n)
{
	int i, ret = 0;

	for (i = 1; i <= n;i++) {
		ret += i;	
	}

	return ret;
}
