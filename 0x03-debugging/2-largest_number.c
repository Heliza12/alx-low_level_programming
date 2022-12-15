#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * 0a : first integer
 * 0b : second integer
 * 0c : third integer
 * Return: largest number
 */

int largest number(int a, int b, int c)
{
	int largest;
	
	if (a > b)
	{
		if (a > c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}
	}

	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}



