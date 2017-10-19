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
Outputs
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

Author: ncoo162

Inputs:
    0 - Out 
    1 - 
    2 - 
    3 - 
Outputs:
    nil
*/
void AddSig(char *output, char tempchar, int pos, int length)
{

    char t;

    if (pos == length) {
        output[pos] = tempchar;
        output[pos + 1] = 0; //end string char
    } else {
        t = output[pos];
        output[pos] = tempchar;
        AddSig(output, t, pos + 1, length);
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
Outputs
    0 - INT: Largest number which is a factor of args 0-2
*/
int DivisorOfThree(int a, int b, int c)
{
    if (a < 1 || b < 1 || c <1){
        return -1;
    }

    int nums[3] = {a, b, c};

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

Outputs
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

Outputs
    void
*/
void Emphasise(char* word)
{
    int capitalise = 0;
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

    word[len + capitalise] = 0;
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

Outputs
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

        n = n/i; //reduce n
        factors[numfactors] = i; //store prime factor (n.b will always be prime because it is the least factor)
        numfactors++; //increment num factors
    }   

    return numfactors;
}


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
                //printf("\nfound start: %d, %d\n", i, j);
                start_x = i;
                start_y = j;
            } else if (maze[i][j] == 2){
                //printf("found end: %d, %d\n", i, j);
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

/* Your comment goes here*/
void DayTrader(int *prices, int numPrices, int *bestRun, int *bestRunIndex)
{
    int lastRun = 0;
    int lastRunIndex = 0;


}

/* Your comment goes here*/
void Compress(int *input, int *output)
{
    output[0] = 99999 + input[0];
}

/* AddOne
Adds 1 to a number stored as a character array, rather than as an INT

Author: Nelson Cook

Inputs
    0 - CHAR Array: String to convert

Outputs
    void
*/
void AddOne(char *input, char *output)
{
    int carry = 1;
    int len = strlen(input);
    int i;


    //printf("\n Length: %d\n", len);
    //Add 1 and carry the 1 for the least significant digits

    //output[len - 1] = input[len - 1] + 1;
    
    for (i = len - 1; i >= 0; i--){

        output[i] = (char)(input[i] + carry);
        
        if (output[i] > '9'){
            carry = 1;
            output[i] = '0';
        } else {            
            carry = 0;
        }
        //printf("Position %d: Was: %c, now %c\n", i, input[i], output[i]);
    }

//relocate array if it's 1 longer
    if (carry == 1){

        AddSig(output, output[0], 1, len);
        output[0] = '1';
        output[len + 2] = 0;
    } else {
        output[len + 1] = 0;
    }


            
}

/* Your comment goes here*/
void Histogram(char *result, int *values, int numValues)
{
    int height = MaxInt(values, numValues) + 1;
    int width = numValues + 1;
    int count = 0;

    //printf("\n");

    for (int i = 0; i < height + 1; i++){
        for (int j = 0; j < width + 1; j++){

            if (j == 0 || j == width || i == 0 || i == height){
                result[count] = '*';
            } else if (values[j - 1] >= height - i){
                result[count] = 'X';
            } else {
                result[count] = ' ';
            }

            //printf("%c", result[count]);
            count++;
        }
        if (i < height){
            result[count] = '\n';
            //printf("%c",result[count]);
        } else if (i == height){
            result[count] = 0;
        }
        count++;
    }
}

/* Your comment goes here*/
void GoldRush(int *results, int rows, int cols, int map[MAX_MAP_SIZE][MAX_MAP_SIZE], int bonus)
{
    results[0] = 99993 + rows + cols + map[0][0] + bonus;
}

