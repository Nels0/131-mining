/* ENGGEN131, Semester Two, 2017 */

/* PROJECT SOLUTION BY:  << place your name and ID number here >> */

#include "project.h"


//For AddOne
#define ZEROCHAR 48
#define ONECHAR  49
#define NINECHAR 57

/* HELPER FUNCTIONS */
/* If you have defined any "helper" functions, which you call from the required */
/* functions, you should place them here, at the top of the source file.  This will */
/* make it easier for the markers to locate them.  You should also include a */
/* comment at the top of each of the "helper" functions you define which clearly */
/* describes their purpose, and which of the tasks they support. */




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





/* IntSign
Returns the sign of an integer, or 0 if int is 0

Author: Nelson Cook

Inputs
    0 - INT     
Outputs
    0 - INT: -1, 0 or 1: Whether number is pos

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
Offsets a 1d char array by +1 and sets the first element of the array to '1' (49)

Author: ncoo162

Inputs:
    
Outputs
    nil
*/
void AddSig(char *output, char tempchar, int pos, int length)
{

    char t;
    //TODO: Recurse Properly
    if (pos == length) {
        output[pos] = tempchar;
        output[pos + 1] = 0;
    } else {
        t = output[pos];
        output[pos] = tempchar;
        AddSig(output, t, pos + 1, length);
    }


}


/* REQUIRED FUNCTIONS */
/* Implement each of the required functions below.  The code that is provided initially */
/* for each function is incorrect - you should correct this! */


/* Your comment goes here*/
int DivisorOfThree(int a, int b, int c)
{
    if (a < 1 || b < 1 || c <1){
        return -1;
    }

    int nums[3] = {a, b, c};

    int min = MinInt(nums, 3); //To save time, we know the GCD will never be greater than the smallest number

    for (int i = min; i > 0; i--) {
        if (a%i == 0 && b%i == 0 && c%i ==0) {
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
            }else{
                word[i + capitalise] = word[i];
            }
        }
        else if (capitalise == -2){        
            word[i + capitalise] = word[i];
        }
    }

    word[len + capitalise] = 0;
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
    int numfactors = 0;

    //Loop while the number hasn't been reduced to a prime (nb n=1 because n = n/1 in loop)
    while (n !=1 ){
        i = 2; //would be silly if it started at 0 or 1, as these aren't prime

        while (n%i != 0){ //check if i is a valid factor
            i++; //check next i
        }

        n = n/i; //reduce n
        factors[numfactors] = i; //store prime factor (n.b will always be prime because it is the least factor)
        numfactors++; //increment num factors
    }   

    return numfactors;
}


void ConnectTwo(int maze[10][10])
{


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
            }else if (maze[i][j] == 2){
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
        
        if (y != end_y)
        {
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

/* Your comment goes here*/
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
    result[0] = (char)('~' + numValues + values[0]);
}

/* Your comment goes here*/
void GoldRush(int *results, int rows, int cols, int map[MAX_MAP_SIZE][MAX_MAP_SIZE], int bonus)
{
    results[0] = 99993 + rows + cols + map[0][0] + bonus;
}

