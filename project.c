/* ENGGEN131, Semester Two, 2017 */

/* PROJECT SOLUTION BY:  << place your name and ID number here >> */

#include "project.h"

/* HELPER FUNCTIONS */
/* If you have defined any "helper" functions, which you call from the required */
/* functions, you should place them here, at the top of the source file.  This will */
/* make it easier for the markers to locate them.  You should also include a */
/* comment at the top of each of the "helper" functions you define which clearly */
/* describes their purpose, and which of the tasks they support. */


/* REQUIRED FUNCTIONS */
/* Implement each of the required functions below.  The code that is provided initially */
/* for each function is incorrect - you should correct this! */

/*Returns minmum value of array*/
int MinInt(int *a, int length)
{
	//Initialise minimum to first number as we know this is a valid value
	int min = a[0];

	//Check each val for a minimum int
	for(int i = 0; i < length; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	return min;
}

//Toggles a psuedo boolean values
int ToggleBool(int bool)
{
	if (bool == 1)
	{
		return 0;
	} else if (bool == 0)
	{
		return 1;
	} else
	{
		return 0;
	}
}


/* Your comment goes here*/
int DivisorOfThree(int a, int b, int c)
{
	if (a < 1 || b < 1 || c <1){
		return -1;
	}

	int nums[2];
	nums[0] = a;
	nums[1] = b;
	nums[2] = c;

	int min = MinInt(nums, 3); //To save time, we know the GCD will never be greater than the smallest number

	for (int i = min; i > 0; i--)
	{
		if (a%i == 0 && b%i == 0 && c%i ==0)
		{
			return i; //Return the first common divisor (which will be the greatest)
		}
	}

	return -1;
}

/* Your comment goes here*/
double AverageSheep(int *counts)
{
	int i = 0;
	int goodCount = 0;
	double sum = 0;
	while (counts[i] != 9999)
	{
		
		if (counts[i] > 0)
		{
			sum += counts[i];
			goodCount++;
		}

		i++;
	}

	if (goodCount == 0){
		return 0.0;
	} else {
		return sum/goodCount;
	}
}

/* Your comment goes here*/
void Emphasise(char* word)
{
	int capitalise = 0;
	int i = 0;
	//printf("size = %d\n", length);

	while (1)
	{
		if (word[i] == '_')
		{
			if(capitalise == 0)
			{
				capitalise = 1;
			} else
			{
				return;
			}
		} else if (capitalise == 1) 
		{
			if (word[i] >= 'a' && word[i] <= 'z')
			{
				word[i] = word[i] - 32;
			}
		}
		i++;
	} 
}

/* Your comment goes here*/
int PrimeFactors(int n, int *factors)
{
	//1. count up and find the least factor of n
	//2. save the factor and divide n by that factor
	//3. save factor
	//4. repeat 1-3
	//5. stop when the factor is n
	//6. return count of factors

	int i; //factor counter
	int j = 0; //num factors

	//Loop while the number hasn't been reduced to a prime (nb n=1 because n = n/1 in loop)
	while (n !=1 )
	{
		i = 2; //would be silly if it started at 0 or 1, as these aren't prime

		while (n%i != 0){ //check if i is a valid factor
			i++; //check next i
		}

		n = n/i; //reduce n
		factors[j] = i; //store prime factor (n.b will always be prime because it is the least factor)
		j++; //increment num factors
	}	

	return j;
}
void ConnectTwo(int maze[10][10])
{
	maze[0][0] = 99999;
}

/* Your comment goes here*/
void DayTrader(int *prices, int numPrices, int *bestRun, int *bestRunIndex)
{
	*bestRun = 99999 + prices[0];
	*bestRunIndex = 99999 + numPrices;
}

/* Your comment goes here*/
void Compress(int *input, int *output)
{
	output[0] = 99999 + input[0];
}

/* Your comment goes here*/
void AddOne(char *input, char *output)
{
	input[0] = '1';
	output[0] = '~';
}

/* Your comment goes here*/
void Histogram(char *result, int *values, int numValues)
{
	result[0] = (char)('~' + numValues + values[0]);
}

/* Your comment goes here*/
void GoldRush(int *results, int rows, int cols, int map[MAX_MAP_SIZE][MAX_MAP_SIZE], int bonus)
{
	results[0] = 99993 + rows + cols + map[0][0] + bonus;
}

