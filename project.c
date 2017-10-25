/* ENGGEN131, Semester Two, 2017 */

/* PROJECT SOLUTION BY:  Nelson Cook 181796651 */

#include "project.h"

/* HELPER FUNCTIONS */
/* If you have defined any "helper" functions, which you call from the required */
/* functions, you should place them here, at the top of the source file.  This will */
/* make it easier for the markers to locate them.  You should also include a */
/* comment at the top of each of the "helper" functions you define which clearly */
/* describes their purpose, and which of the tasks they support. */



//For AddOne
#define ZEROCHAR 48
#define ONECHAR  49
#define NINECHAR 57


/* MinInt
Returns minmum value of array

Author: Nelson Cook

Inputs:
    0 - INT[]   Array of values to find minimum of
    1 - INT     Length of arg 0
*/
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

/* MaxInt
Returns max value of array

Author: Nelson Cook

Inputs:
    0 - INT[]   Array of values to find max of
    1 - INT     Length of arg 0
*/
int MaxInt(int *a, int length)
{
    //Initialise minimum to first number as we know this is a valid value
    int max = a[0];

    //Check each val for a minimum int
    for(int i = 0; i < length; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}


/* IntSign
Returns the sign of an integer, or 0 if int is 0

Author: Nelson Cook

Inputs
    0 - INT     
Returns
    0 - INT: -1, 0 or 1: Whether number is negative, zero, or positive
*/

int IntSign(int val)
{
    if (val > 0){
        return 1;
    } else if (val < 0){
        return -1;
    } else {
        return 0;
    }
}


/*AddSig
Offsets a string by +1 (To the right) recursively


Author: ncoo162

Inputs:
    0 - CHAR[]: Output string
    1 - CHAR:   The character to prefix to the string
    2 - INT:    Which position to offset from
    3 - INT:    Length of the string (Before offset)
Returns:
    void
*/
void AddSig(char *output, char tempchar, int pos, int length)
{

    char t; //tempchar for child function

    if (pos == length) {
        output[pos] = tempchar;
        output[pos + 1] = 0; //Don't forget the null terminator!
    } else {
        t = output[pos];
        output[pos] = tempchar;
        AddSig(output, t, pos + 1, length); //Recurse
    }


}


/* REQUIRED FUNCTIONS */
/* Implement each of the required functions below.  The code that is provided initially */
/* for each function is incorrect - you should correct this! */


/* DivisorOfThree
Finds the greatest common divisor (GCD) of 3 integers.
Returns -1 if any numbers are less than 1

Author: Nelson Cook

Inputs
    0 - INT - Number to find divisor of
    1 - INT - Number to find divisor of
    2 - INT - Number to find divisor of
Returns
    0 - INT: Largest number which is a factor of args 0-2
*/
int DivisorOfThree(int a, int b, int c)
{
    if (a < 1 || b < 1 || c <1){
        return -1;
    }

    int nums[3];

    nums[0] = a;
    nums[1] = b;
    nums[2] = c;

    int min = MinInt(nums, 3); //To save time, we know the GCD will never be greater than the smallest number

    for (int i = min; i > 0; i--){
        if (a%i == 0 && b%i == 0 && c%i ==0){
            return i; //Return the first common divisor (which will be the greatest)
        }
    }

    return -1; //just in case
}

/* Average Sheep
Finds the mean of a series of values.
Requires end of array value of 9999
Values of -1 will be ignored.

Author: Nelson Cook

Inputs
    0 - INT Array: Dataset to compute average of

Returns
    0 - DOUBLE: Mean of the dataset
*/
double AverageSheep(int *counts)
{
    int i = 0;
    int goodCount = 0;
    double sum = 0;


    while (counts[i] != 9999){        
        if (counts[i] != -1){
            sum += counts[i];
            goodCount++;
        }

        i++;
    }

    if (goodCount == 0){
        return 0.0;
    } else {
        return sum/goodCount; //will be correct double value as "sum" is double
    }
}

/* Emphasise
Use '_' to convert letters in a string to uppercase 

Example: in: "This is a _good_ question."
        out: "This is a GOOD question."

Author: Nelson Cook

Inputs
    0 - CHAR Array: String to convert

Returns
    void
*/
void Emphasise(char* word)
{
    int capitalise = 0; //Serves as '_' tracking AND offset variable.
    int i = 0;
    int len = strlen(word);

    for (i = 0; i < len; i++){
        if (word[i] == '_'){
            if(capitalise == 0){
                capitalise -= 1;
            } else if (capitalise == -1){
                capitalise -= 1;
            }
        }
        else if (capitalise == -1){
            if (word[i] >= 'a' && word[i] <= 'z'){
                word[i + capitalise] = word[i] - 32;
            } else {
                word[i + capitalise] = word[i];
            }
        }
        else if (capitalise == -2){        
            word[i + capitalise] = word[i];
        }
    }

    word[len + capitalise] = 0; //Remember the null terminator!
}

/* Prime Factors
Finds prime factors of an intger. Does this by finding the least divisors of the integer,
then finding least divisors of the remainder in sucession.
First least divisor will always be prime. This could be optimised using sieve of erathansodnas 
to avoid checking non-prime divisors, or not checking non-prime numbers less than ~20, however,
the function will hit MAX_INT before it slows down appreciably.

Author: Nelson Cook

Inputs
    0 - INT: Integer to find prime factors of
    1 - INT Array: List of factors found

Returns
    0 - INT: Number of prime factors found, and length of arg 1
*/
int PrimeFactors(int n, int *factors)
{
    //1. count up and find the least factor of n
    //2. save the factor and divide n by that factor
    //3. save factor
    //4. repeat 1-3
    //5. stop when the factor is n
    //6. return count of factors

    int i; //factor counter
    int numfactors = 0;

    //Loop while the number hasn't been reduced to a prime (nb n=1 because n = n/1 in loop)
    while (n !=1 ){
        i = 2; //would be silly if it started at 0 or 1, as these aren't prime

        while (n%i != 0){
            i++;
        }

        n /= i; //reduce n
        factors[numfactors] = i; //store prime factor (n.b will always be prime because it is the least factor)
        numfactors++; 
    }   

    return numfactors;
}

/* ConnectTwo
Joins two points on a 2d array (start and end denoted by 1 and 2 respectively)
Moves diagonally then in a straight line from point 1 to point 2
Stores path by marking locations travelled with a 3.

Author: Nelson Cook

Inputs
    0 - INT[10][10]: Map for path to traverse.

Returns
    void
*/
void ConnectTwo(int maze[10][10])
{

    //Stops the compiler complaining.
    int i, j, x, y;
    int start_x = 0;
    int start_y = 0;
    int end_x = 0;
    int end_y = 0;

    //Find start and end co-ords
    for (i = 0; i <10; i++){
        for (j = 0; j <10; j++){
            if (maze[i][j] == 1){
                start_x = i;
                start_y = j;
            } else if (maze[i][j] == 2){
                end_x = i;
                end_y = j;
            }
        }
    }

    //prepare variables for pathfinding

    int dir_m = IntSign(end_x - start_x);
    int dir_n = IntSign(end_y - start_y);
    x = start_x;
    y = start_y;

    //pathfinding
    while (x != end_x || y != end_y){
        //printf("loop\n");
        if (x != end_x){
            x += dir_m;
        }
        
        if (y != end_y){
            y += dir_n;
        }


        maze[x][y] = 3;
    }

    //Make sure ending is set to correct value (overwritten by pathfinding)
    maze[end_x][end_y] = 2;
}

/*
Currently not working
*/
void DayTrader(int *prices, int numPrices, int *bestRun, int *bestRunIndex)
{
    *bestRun = 0;
    *bestRunIndex = 0;
    int currentRun = 0;
    int currentRunIndex = 0;

    for (int i = 0; i < numPrices -1; i++){
        if (prices[i] < prices[i+1]){
            currentRun++;
        } else {
            if (currentRun > *bestRun){
                *bestRun = currentRun;
                *bestRunIndex = currentRunIndex;
            }

            currentRun = 0;
            currentRunIndex = i+1;
        }
    }

    if (currentRun > *bestRun){
        *bestRun = currentRun;
        *bestRunIndex = currentRunIndex;
    }

}

/* Your comment goes here*/
void Compress(int *input, int *output)
{
    int i = 0;
    int countCmp = 0;
    int cmpIdx = 0;
    int outLen = 0;

    while (input[i] != -1){


        if (input[i] == input[cmpIdx]){
            countCmp++;
            output[outLen * 2 + 1] = input[cmpIdx];
            output[outLen * 2] = countCmp;
        } else {
            outLen++;
            cmpIdx = i;
            countCmp = 0;
            i--;
        }

        i++;
    }

    output[outLen * 2 + 2] = -1;
}

/* AddOne
Adds 1 to a number stored as a character array, rather than as an INT

Author: Nelson Cook

Inputs
    0 - CHAR Array: String to convert

Returns
    void
*/
void AddOne(char *input, char *output)
{
    int carry = 1;
    int len = strlen(input);
    int i;


    //Add 1 and carry the 1 for the least significant digits
    
    for (i = len - 1; i >= 0; i--){

        output[i] = (char)(input[i] + carry);
        
        if (output[i] > '9'){
            carry = 1;
            output[i] = '0';
        } else {            
            carry = 0;
        }
    }

//relocate array if there is a carry still required
    if (carry == 1){
        AddSig(output, output[0], 1, len); //carry the 1
        output[0] = '1';
        output[len + 2] = 0;
    } else {
        output[len + 1] = 0;
    }


            
}

/* Histogram
Produces a string which when printed,draws a histogram with
a border of "*". given int array of frequencies.

Author: Nelson Cook

Inputs
    0 - CHAR[]: Output of histogram function (including \n and \0)
    1 - INT[]:  Frequncies to draw
    2 - INT:    Length of arg 1

Returns
    void
*/
void Histogram(char *result, int *values, int numValues)
{
    int height = MaxInt(values, numValues) + 1;
    int width = numValues + 1;
    int count = 0;


    for (int i = 0; i < height + 1; i++){
        for (int j = 0; j < width + 1; j++){

            if (j == 0 || j == width || i == 0 || i == height){ //Border conditions
                result[count] = '*';
            } else if (values[j - 1] >= height - i){ //current height is less than the histogram value (with border offsets)
                result[count] = 'X';
            } else {
                result[count] = ' '; //Empty space
            }

            count++;
        }


        if (i < height){ //Don't add an \n to the end of the graph string
            result[count] = '\n';
        } else if (i == height){
            result[count] = 0; //Don't forget the null termniator!
        }
        count++; 
    }
}

/* Your comment goes here*/
void GoldRush(int *results, int rows, int cols, int map[MAX_MAP_SIZE][MAX_MAP_SIZE], int bonus)
{
    //results[0] = 99993 + rows + cols + map[0][0] + bonus;

    int visited[MAX_MAP_SIZE][MAX_MAP_SIZE] = {0};
    int goldCount = 0;
    int pureGoldCount = 0;
    int pure = 0;
    int i, j;


    switch (bonus) {
        case 0 :
        //iterate over whole array

        for (i = 0; i < rows; i++){
            for (j = 0; j < cols; j++){
                if (map[i][j] == 9){
                    goldCount++;


                    if (i > 0 && i < rows - 1 && j > 0 && j < cols - 1){
                        //printf("checking if pure ");
                        pure = 1;
                        for (int x = -1; x < 2; x++){
                            for (int y = -1; y <2; y++){
                                if (map[i+x][j+y] != 9)
                                {
                                    pure = 0;
                                }
                            }
                        }
                        pureGoldCount += pure;
                    }

                }
            }
        }

        results[0] = goldCount;
        results[1] = pureGoldCount;
        //printf("%d %d ", results[0], results[1] );

        break;

        case 1 :

        break;

        case 2 :

        break;
    }
}

