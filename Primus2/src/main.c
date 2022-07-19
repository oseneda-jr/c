#include <stdio.h>

int main(void)
{
	// declare and initialize an array to store primus numbers
	int primus[100] = {2, 3};

	_Bool isPrimus = 0;

	// loops to discover primus numbers
	for (int p = 5; p < 100; p = p + 2)
	{
		isPrimus = 1;
		int i = 0;
		for (i; i < p; i++)
		{
			if (primus[i] == 0)
				break;
			else
			{
				if (p % primus[i] == 0)
				{
					isPrimus = 0;
					break;
				}
			}

		}
		if (isPrimus)
			primus[i] = p;
			
	}

	for (int i = 0; i < 100 ; i++)
	{
		if (primus[i] != 0)
			printf("%d ", primus[i]);
	}
	
	return 0;
}