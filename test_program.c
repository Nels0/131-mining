/* ENGGEN131, Semester Two, 2017 */
/* The header file for Project Two */
/* Prepared by Paul Denny, October 2017 */

#include "project.h"

/* YOU WILL NOT BE SUBMITTING THIS FILE FOR MARKING */
/* You are encouraged to add additional tests to the testing functions */
/* defined in this program.  There are ten test functions, one for each */
/* of the functions you are required to define for this project */
void Test_DivisorOfThree(void);
void Test_AverageSheep(void);
void Test_Emphasise(void);
void Test_PrimeFactors(void);
void Test_ConnectTwo(void);
void Test_DayTrader(void);
void Test_Compress(void);
void Test_AddOne(void);
void Test_Histogram(void);
void Test_GoldRush(void);
void Test_GoldRush_BonusI(void);
void Test_GoldRush_BonusII(void);

/* You do not need to modify the main() function - it simply calls each of */
/* the test functions */
int main(void)
{
	// Minimal testing of each function
	Test_DivisorOfThree();
	Test_AverageSheep();
	Test_Emphasise();
	Test_PrimeFactors();
	Test_ConnectTwo();
	Test_DayTrader();
	Test_Compress();
	Test_AddOne();
	Test_Histogram();
	Test_GoldRush();
	Test_GoldRush_BonusI();
	Test_GoldRush_BonusII();
	return 0;
}

/* A function to test Task One */
void Test_DivisorOfThree(void)
{
	if (DivisorOfThree(1, 1, 2) == 99999) {
		printf("\nTask One:   DivisorOfThree() - not yet implemented");
	} else {
		printf("\nTask One:   DivisorOfThree() - ");
		if (DivisorOfThree(1288, 759, 1173) != 23) {
			printf("FAIL (1288, 759, 1173) ");
		} else {
			printf("PASS ");
		}
		if (DivisorOfThree(760, 1960, 2720) != 40) {
			printf("FAIL (760, 1960, 2720) ");
		} else {
			printf("PASS ");
		}
		if (DivisorOfThree(100, 0, 1000000) != -1) {
			printf("FAIL (100, 0, 1000000) ");
		} else {
			printf("PASS ");
		}
		if (DivisorOfThree(0, 0, 0) != -1) {
			printf("FAIL (0, 0, 0) ");
		} else {
			printf("PASS ");
		}
		if (DivisorOfThree(-1, -1, -1) != -1) {
			printf("FAIL (-1, -1, -1) ");
		} else {
			printf("PASS ");
		}
		if (DivisorOfThree(-50, 10, 5) != -1) {
			printf("FAIL (-50, 10, 5) ");
		} else {
			printf("PASS ");
		}
		if (DivisorOfThree(40, 40, 40) != 40) {
			printf("FAIL (40, 40, 40) ");
		} else {
			printf("PASS ");
		}
		if (DivisorOfThree(40, 40, 39) != 1) {
			printf("FAIL (40, 40, 39) ");
		} else {
			printf("PASS ");
		}
		if (DivisorOfThree(99999, 999, 9) != 9) {
			printf("FAIL (99999, 999, 9) ");
		} else {
			printf("PASS ");
		}
		if (DivisorOfThree(642, 968, 91) != 1) {
			printf("FAIL (642, 968, 91) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Task Two */
void Test_AverageSheep(void)
{
	int sheep1[MAX_ARRAY_SIZE] = {0, 12, 18, 19, 9999};
	int sheep2[MAX_ARRAY_SIZE] = {-1, 25, 12, 18, -1, 9999};
	int sheep3[MAX_ARRAY_SIZE] = {-1, 22, 9999, -1, 25, 12};
	int sheep4[MAX_ARRAY_SIZE] = {-1, -1, 9999, -1, 25, 12};
	int sheep5[MAX_ARRAY_SIZE] = {-1, 9999};
	int sheep6[MAX_ARRAY_SIZE] = {9999};
	int sheep7[MAX_ARRAY_SIZE] = {0, 9999};
	int sheep8[MAX_ARRAY_SIZE] = {-5, -10, 5, 10, -1, 9999};
	int sheep9[MAX_ARRAY_SIZE] = {-2, -1, -2, 9999, -1, -2};
	int sheep10[MAX_ARRAY_SIZE] = {-50, 10, 10000, 9999};
	int sheep11[MAX_ARRAY_SIZE] = {-50, 50, 9999};
	if (AverageSheep(sheep1) == 99999.9) {
		printf("\nTask Two:   AverageSheep()   - not yet implemented");
	} else {
		printf("\nTask Two:   AverageSheep()   - ");
		if ((AverageSheep(sheep2) < 18.333332) || (AverageSheep(sheep2) > 18.333334)) {
			printf("FAIL (sheep2) ");
		} else {
			printf("PASS ");
		}
		if ((AverageSheep(sheep3) < 21.999999) || (AverageSheep(sheep3) > 22.000001)) {
			printf("FAIL (sheep3) ");
		} else {
			printf("PASS ");
		}
		if ((AverageSheep(sheep4) < -0.000001) || (AverageSheep(sheep4) > 0.000001)) {
			printf("FAIL (sheep4) ");
		} else {
			printf("PASS ");
		}
		if ((AverageSheep(sheep5) < -0.000001) || (AverageSheep(sheep5) > 0.000001)) {
			printf("FAIL (sheep5) ");
		} else {
			printf("PASS ");
		}
		if ((AverageSheep(sheep6) < -0.000001) || (AverageSheep(sheep6) > 0.000001)) {
			printf("FAIL (sheep6) ");
		} else {
			printf("PASS ");
		}
		if ((AverageSheep(sheep7) < -0.000001) || (AverageSheep(sheep7) > 0.000001)) {
			printf("FAIL (sheep7) ");
		} else {
			printf("PASS ");
		}
		if ((AverageSheep(sheep8) < -0.000001) || (AverageSheep(sheep8) > 0.000001)) {
			printf("FAIL (sheep8) ");
		} else {
			printf("PASS ");
		}
		if ((AverageSheep(sheep9) < -2.000001) || (AverageSheep(sheep9) > -1.99999)) {
			printf("FAIL (sheep9) ");
		} else {
			printf("PASS ");
		}
		if ((AverageSheep(sheep10) < 3319.999999) || (AverageSheep(sheep10) > 3320.000001)) {
			printf("FAIL (sheep10) ");
		} else {
			printf("PASS ");
		}
		if ((AverageSheep(sheep11) < -0.000001) || (AverageSheep(sheep11) > 0.000001)) {
			printf("FAIL (sheep11) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Task Three */
void Test_Emphasise(void)
{
	char words0[MAX_ARRAY_SIZE] = "not im_plemented";
	char wordsA[MAX_ARRAY_SIZE] = "this is a _good_ question!";
	char wordsB[MAX_ARRAY_SIZE] = "It is _over 9000_!";
	char wordsC[MAX_ARRAY_SIZE] = "_Nothing to see here_";
	char wordsD[MAX_ARRAY_SIZE] = "__";
	char wordsE[MAX_ARRAY_SIZE] = "A_b_C";
	char wordsF[MAX_ARRAY_SIZE] = "A_B_C";
	char wordsG[MAX_ARRAY_SIZE] = "a _!@#$%^&*()_ c";
	char wordsH[MAX_ARRAY_SIZE] = "Just a normal test __";
	char wordsI[MAX_ARRAY_SIZE] = "Just a _normal_ test";
	char wordsJ[MAX_ARRAY_SIZE] = "__ Just a normal test";

	Emphasise(words0);
	if (words0[0] == '~') {
		printf("\nTask Three: Emphasise()      - not yet implemented");
	} else {
		printf("\nTask Three: Emphasise()      - ");
		Emphasise(wordsA);
		if (strcmp(wordsA, "this is a GOOD question!")) {
			printf("FAIL (wordsA) ");
		} else {
			printf("PASS ");
		}
		Emphasise(wordsB);
		if (strcmp(wordsB, "It is OVER 9000!")) {
			printf("FAIL (wordsB) ");
		} else {
			printf("PASS ");
		}
		Emphasise(wordsC);
		if (strcmp(wordsC, "NOTHING TO SEE HERE")) {
			printf("FAIL (wordsC) ");
		} else {
			printf("PASS ");
		}
		Emphasise(wordsD);
		if (strcmp(wordsD, "")) {
			printf("FAIL (wordsD) ");
		} else {
			printf("PASS ");
		}
		Emphasise(wordsE);
		if (strcmp(wordsE, "ABC")) {
			printf("FAIL (wordsE) ");
		} else {
			printf("PASS ");
		}
		Emphasise(wordsF);
		if (strcmp(wordsF, "ABC")) {
			printf("FAIL (wordsF) ");
		} else {
			printf("PASS ");
		}
		Emphasise(wordsG);
		if (strcmp(wordsG, "a !@#$%^&*() c")) {
			printf("FAIL (wordsG) ");
		} else {
			printf("PASS ");
		}
		Emphasise(wordsH);
		if (strcmp(wordsH, "Just a normal test ")) {
			printf("FAIL (wordsH) ");
		} else {
			printf("PASS ");
		}
		Emphasise(wordsI);
		if (strcmp(wordsI, "Just a NORMAL test")) {
			printf("FAIL (wordsI) ");
		} else {
			printf("PASS ");
		}
		Emphasise(wordsJ);
		if (strcmp(wordsJ, " Just a normal test")) {
			printf("FAIL (wordsJ) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Task Four */
void Test_PrimeFactors(void)
{
	int numFactors;
	int factors[MAX_ARRAY_SIZE];

	numFactors = PrimeFactors(2, factors);
	if (numFactors == 99999) {
		printf("\nTask Four:  PrimeFactors()   - not yet implemented");
	} else {
		printf("\nTask Four:  PrimeFactors()   - ");
		numFactors = PrimeFactors(567, factors);
		if (numFactors != 5 || (factors[0] * factors[1] * factors[2] * factors[3] * factors[4] != 567)) {
			printf("FAIL (567) ");
		} else {
			printf("PASS ");
		}
		numFactors = PrimeFactors(5678901, factors);
		if (numFactors != 4 || (factors[0] * factors[1] * factors[2] * factors[3] != 5678901)) {
			printf("FAIL (5678901) ");
		} else {
			printf("PASS ");
		}
		numFactors = PrimeFactors(13, factors);
		if (numFactors != 1 || (factors[0] != 13)) {
			printf("FAIL (13) ");
		} else {
			printf("PASS ");
		}
		numFactors = PrimeFactors(2, factors);
		if (numFactors != 1 || (factors[0] != 2)) {
			printf("FAIL (2) ");
		} else {
			printf("PASS ");
		}
		numFactors = PrimeFactors(100, factors);
		if (numFactors != 4 || (factors[0] * factors[1] * factors[2] * factors[3] != 100)) {
			printf("FAIL (100) ");
		} else {
			printf("PASS ");
		}
		numFactors = PrimeFactors(1024, factors);
		if (numFactors != 10 || (factors[0] * factors[1] * factors[2] * factors[3] * factors[4] * factors[5] * factors[6] * factors[7] * factors[8] * factors[9] != 1024)) {
			printf("FAIL (1024) ");
		} else {
			printf("PASS ");
		}
		numFactors = PrimeFactors(2530, factors);
		if (numFactors != 4 || (factors[0] * factors[1] * factors[2] * factors[3] != 2530)) {
			printf("FAIL (2530) ");
		} else {
			printf("PASS ");
		}
		numFactors = PrimeFactors(32767, factors);
		if (numFactors != 3 || (factors[0] * factors[1] * factors[2] != 32767)) {
			printf("FAIL (32767) ");
		} else {
			printf("PASS ");
		}
		numFactors = PrimeFactors(11111, factors);
		if (numFactors != 2 || (factors[0] * factors[1] != 11111)) {
			printf("FAIL (11111) ");
		} else {
			printf("PASS ");
		}
		numFactors = PrimeFactors(19683, factors);
		if (numFactors != 9 || (factors[0] * factors[1] * factors[2] * factors[3] * factors[4] * factors[5] * factors[6] * factors[7] * factors[8] != 19683)) {
			printf("FAIL (19683) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Task Five */
void Test_ConnectTwo(void)
{
	int map0[10][10] = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 1 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 3 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 3 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 3 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 3 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 3 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 3 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 3 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 3 0 0 0 0 0 0
						{0, 0, 0, 2, 0, 0, 0, 0, 0, 0}};// 0 0 0 2 0 0 0 0 0 0
						
	int map1[10][10] = {{1, 0, 2, 0, 0, 0, 0, 0, 0, 0}, // 1 3 2 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};// 0 0 0 0 0 0 0 0 0 0
						
	int map2[10][10] = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 1 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 3 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 3 0 0 0 0 0 0 0 0 0
						{2, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 2 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};// 0 0 0 0 0 0 0 0 0 0
						
	int map3[10][10] = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 1 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 3 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 3 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 3 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 3 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 3 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 3 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 3 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 3 0 0
						{0, 0, 0, 0, 0, 0, 0, 2, 0, 0}};// 0 0 0 0 0 0 0 2 0 0
						
	int map4[10][10] = {{2, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 2 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 3 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 3 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 3 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 3 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 3 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 3 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 3 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 3 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 1, 0, 0}};// 0 0 0 0 0 0 0 1 0 0

	int map5[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 1, 2, 0, 0, 0, 0}, // 0 0 0 0 1 2 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};// 0 0 0 0 0 0 0 0 0 0
						
	int map6[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 2, 1, 0, 0, 0, 0}, // 0 0 0 0 2 1 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};// 0 0 0 0 0 0 0 0 0 0
						
	int map7[10][10] = {{2, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 2 3 3 3 3 3 3 3 3 1
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};// 0 0 0 0 0 0 0 0 0 0
						
	int map8[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, // 0 0 0 0 0 0 0 0 0 2
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 3
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 3
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 3
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 3
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 3
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 3
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 3
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 3
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 1}};// 0 0 0 0 0 0 0 0 0 1
						
	int map9[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{1, 0, 0, 0, 0, 0, 0, 0, 0, 2}};// 1 3 3 3 3 3 3 3 3 2
						
	int map10[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},// 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0 0 0 0 0 0 0 0 0 0
						{2, 0, 0, 0, 0, 0, 0, 0, 0, 1}};// 2 3 3 3 3 3 3 3 3 1
						
	ConnectTwo(map0);
	if (map0[0][0] == 99999) {
		printf("\nTask Five:  ConnectTwo()     - not yet implemented");
	} else {
		printf("\nTask Five:  ConnectTwo()     - ");
		ConnectTwo(map1);
		if (map1[0][1] != 3) {
			printf("FAIL (map1) ");
		} else {
			printf("PASS ");
		}
		ConnectTwo(map2);
		if ((map2[1][0] != 3) || (map2[2][0] != 3)) {
			printf("FAIL (map2) ");
		} else {
			printf("PASS ");
		}
		ConnectTwo(map3);
		if ((map3[1][1] != 3) || (map3[2][2] != 3) || (map3[3][3] != 3) || (map3[4][4] != 3) || (map3[5][5] != 3) || (map3[6][6] != 3) || (map3[7][7] != 3) || (map3[8][7] != 3)) {
			printf("FAIL (map3) ");
		} else {
			printf("PASS ");
		}
		ConnectTwo(map4);
		if ((map4[1][0] != 3) || (map4[2][0] != 3) || (map4[3][1] != 3) || (map4[4][2] != 3) || (map4[5][3] != 3) || (map4[6][4] != 3) || (map4[7][5] != 3) || (map4[8][6] != 3)) {
			printf("FAIL (map4) ");
		} else {
			printf("PASS ");
		}
		ConnectTwo(map5);
		if ((map5[4][4] != 1) || (map5[4][5] != 2)) {
			printf("FAIL (map5) ");
		} else {
			printf("PASS ");
		}
		ConnectTwo(map6);
		if ((map6[4][4] != 2) || (map6[4][5] != 1)) {
			printf("FAIL (map6) ");
		} else {
			printf("PASS ");
		}
		ConnectTwo(map7);
		if ((map7[0][1] != 3) || (map7[0][2] != 3) || (map7[0][3] != 3) || (map7[0][4] != 3) || (map7[0][5] != 3) || (map7[0][6] != 3) || (map7[0][7] != 3) || (map7[0][8] != 3)) {
			printf("FAIL (map7) ");
		} else {
			printf("PASS ");
		}
		ConnectTwo(map8);
		if ((map8[1][9] != 3) || (map8[2][9] != 3) || (map8[3][9] != 3) || (map8[4][9] != 3) || (map8[5][9] != 3) || (map8[6][9] != 3) || (map8[7][9] != 3) || (map8[8][9] != 3)) {
			printf("FAIL (map8) ");
		} else {
			printf("PASS ");
		}
		ConnectTwo(map9);
		if ((map9[9][1] != 3) || (map9[9][2] != 3) || (map9[9][3] != 3) || (map9[9][4] != 3) || (map9[9][5] != 3) || (map9[9][6] != 3) || (map9[9][7] != 3) || (map9[9][8] != 3)) {
			printf("FAIL (map9) ");
		} else {
			printf("PASS ");
		}
		ConnectTwo(map10);
		if ((map10[9][1] != 3) || (map10[9][2] != 3) || (map10[9][3] != 3) || (map10[9][4] != 3) || (map10[9][5] != 3) || (map10[9][6] != 3) || (map10[9][7] != 3) || (map10[9][8] != 3)) {
			printf("FAIL (map10) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Task Six */
void Test_DayTrader(void)
{
	int prices0[5] = {0, 2, 3, 4, 5};
	int pricesA[15] = {59, 60, 55, 23, 42, 44, 48, 50, 43, 45, 43, 44, 47, 51, 52};
	int pricesB[10] = {1, 2, 3, 3, 3, 4, 3, 4, 5, 6};
	int pricesC[10] = {123, 120, 118, 119, 121, 126, 127, 130, 129, 132};
	int pricesD[1] = {1};
	int pricesE[5] = {0, 0, 0, 0, 0};
	int pricesF[5] = {-1, -2, -3, -4, -5};
	int pricesG[5] = {-5, -4, -3, -2, -1};
	int pricesH[7] = {-3, -2, -1, -7, -6, -5};
	int pricesI[5] = {-10, -10, -10, -9, -9};
	int pricesJ[2] = {60, 20};
	int bestRun, bestRunIndex;

	DayTrader(prices0, 5, &bestRun, &bestRunIndex);
	if (bestRun == 99999) {
		printf("\nTask Six:   DayTrader()      - not yet implemented");
	} else {
		printf("\nTask Six:   DayTrader()      - ");
		DayTrader(pricesA, 15, &bestRun, &bestRunIndex);
		if (bestRun != 4 || bestRunIndex != 3) {
			printf("FAIL (pricesA) ");
		} else {
			printf("PASS ");
		}
		DayTrader(pricesB, 10, &bestRun, &bestRunIndex);
		if (bestRun != 3 || bestRunIndex != 6) {
			printf("FAIL (pricesB) ");
		} else {
			printf("PASS ");
		}
		DayTrader(pricesC, 10, &bestRun, &bestRunIndex);
		if (bestRun != 5 || bestRunIndex != 2) {
			printf("FAIL (pricesC) ");
		} else {
			printf("PASS ");
		}
		DayTrader(pricesD, 1, &bestRun, &bestRunIndex);
		if (bestRun != 0 || bestRunIndex != 0) {
			printf("FAIL (pricesD) ");
		} else {
			printf("PASS ");
		}
		DayTrader(pricesE, 5, &bestRun, &bestRunIndex);
		if (bestRun != 0 || bestRunIndex != 0) {
			printf("FAIL (pricesE) ");
		} else {
			printf("PASS ");
		}
		DayTrader(pricesF, 5, &bestRun, &bestRunIndex);
		if (bestRun != 0 || bestRunIndex != 0) {
			printf("FAIL (pricesF) ");
		} else {
			printf("PASS ");
		}
		DayTrader(pricesG, 5, &bestRun, &bestRunIndex);
		if (bestRun != 4 || bestRunIndex != 0) {
			printf("FAIL (pricesG) ");
		} else {
			printf("PASS ");
		}
		DayTrader(pricesH, 7, &bestRun, &bestRunIndex);
		if (bestRun != 3 || bestRunIndex != 3) {
			printf("FAIL (pricesH) ");
		} else {
			printf("PASS ");
		}
		DayTrader(pricesI, 5, &bestRun, &bestRunIndex);
		if (bestRun != 1 || bestRunIndex != 2) {
			printf("FAIL (pricesI) ");
		} else {
			printf("PASS ");
		}
		DayTrader(pricesJ, 2, &bestRun, &bestRunIndex);
		if (bestRun != 0 || bestRunIndex != 0) {
			printf("FAIL (pricesJ) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Task Seven */
void Test_Compress(void)
{
	int inputA[MAX_ARRAY_SIZE] = {0,1,2,2,-1};
	int inputB[MAX_ARRAY_SIZE] = {1,1,2,2,-1};
	int inputC[MAX_ARRAY_SIZE] = {7,7,7,7,7,7,7,7,7,7,-1};
	int inputD[MAX_ARRAY_SIZE] = {4,7,7,7,-1};
	int inputE[MAX_ARRAY_SIZE] = {1,-1};
	int inputF[MAX_ARRAY_SIZE] = {7,7,7,-1,7,7,7};
	int inputG[MAX_ARRAY_SIZE] = {0,-1};
	int inputH[MAX_ARRAY_SIZE] = {-3,-3,-3,2,2,2,-1};
	int inputI[MAX_ARRAY_SIZE] = {1,2,3,4,5,-1};
	int inputJ[MAX_ARRAY_SIZE] = {2,4,4,4,6,6,6,6,6,8,8,8,8,8,8,8,-1};
	int inputK[MAX_ARRAY_SIZE] = {32767,-32767,-1};
	int output[MAX_ARRAY_SIZE];

	Compress(inputA, output);
	if (output[0] == 99999) {
		printf("\nTask Seven: Compress()       - not yet implemented");
	} else {
		printf("\nTask Seven: Compress()       - ");
		Compress(inputB, output);
		if (output[0] != 2 || output[1] != 1 || output[2] != 2 || output[3] != 2 || output[4] != -1) {
			printf("FAIL (inputB) ");
		} else {
			printf("PASS ");
		}
		Compress(inputC, output);
		if (output[0] != 10 || output[1] != 7 || output[2] != -1) {
			printf("FAIL (inputC) ");
		} else {
			printf("PASS ");
		}
		Compress(inputD, output);
		if (output[0] != 1 || output[1] != 4 || output[2] != 3 || output[3] != 7 || output[4] != -1) {
			printf("FAIL (inputD) ");
		} else {
			printf("PASS ");
		}
		Compress(inputE, output);
		if (output[0] != 1 || output[1] != 1) {
			printf("FAIL (inputE) ");
		} else {
			printf("PASS ");
		}
		Compress(inputF, output);
		if (output[0] != 3 || output[1] != 7) {
			printf("FAIL (inputF) ");
		} else {
			printf("PASS ");
		}
		Compress(inputG, output);
		if (output[0] != 1 || output[1] != 0) {
			printf("FAIL (inputG) ");
		} else {
			printf("PASS ");
		}
		Compress(inputH, output);
		if (output[0] != 3 || output[1] != -3 || output[2] != 3 || output[3] != 2) {
			printf("FAIL (inputH) ");
		} else {
			printf("PASS ");
		}
		Compress(inputI, output);
		if (output[0] != 1 || output[1] != 1 || output[2] != 1 || output[3] != 2 || output[4] != 1 || output[5] != 3 || output[6] != 1 || output[7] != 4 || output[8] != 1 || output[9] != 5) {
			printf("FAIL (inputI) ");
		} else {
			printf("PASS ");
		}
		Compress(inputJ, output);
		if (output[0] != 1 || output[1] != 2 || output[2] != 3 || output[3] != 4 || output[4] != 5 || output[5] != 6 || output[6] != 7 || output[7] != 8) {
			printf("FAIL (inputJ) ");
		} else {
			printf("PASS ");
		}
		Compress(inputK, output);
		if (output[0] != 1 || output[1] != 32767 || output[2] != 1 || output[3] != -32767) {
			printf("FAIL (inputK) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Task Eight */
void Test_AddOne(void)
{
	char words0[MAX_ARRAY_SIZE] = "123";
	char wordsA[MAX_ARRAY_SIZE] = "99999";
	char wordsB[MAX_ARRAY_SIZE] = "12399999999";
	char wordsC[MAX_ARRAY_SIZE] = "9";
	char wordsD[MAX_ARRAY_SIZE] = "0";
	char wordsE[MAX_ARRAY_SIZE] = "32767";
	char wordsF[MAX_ARRAY_SIZE] = "5";
	char wordsG[MAX_ARRAY_SIZE] = "9999999999999999999999999999999";
	char wordsH[MAX_ARRAY_SIZE] = "1234567890";
	char wordsI[MAX_ARRAY_SIZE] = "123456789";
	char wordsJ[MAX_ARRAY_SIZE] = "1000000000000000";
	char output[MAX_ARRAY_SIZE];

	AddOne(words0, output);
	if (output[0] == '~') {
		printf("\nTask Eight: AddOne()         - not yet implemented");
	} else {
		printf("\nTask Eight: AddOne()         - ");
		AddOne(wordsA, output);
		if (strcmp(output, "100000")) {
			printf("FAIL (wordsA) ");
		} else {
			printf("PASS ");
		}
		AddOne(wordsB, output);
		if (strcmp(output, "12400000000")) {
			printf("FAIL (wordsB) ");
		} else {
			printf("PASS ");
		}
		AddOne(wordsC, output);
		if (strcmp(output, "10")) {
			printf("FAIL (wordsC) ");
		} else {
			printf("PASS ");
		}
		AddOne(wordsD, output);
		if (strcmp(output, "1")) {
			printf("FAIL (wordsD) ");
		} else {
			printf("PASS ");
		}
		AddOne(wordsE, output);
		if (strcmp(output, "32768")) {
			printf("FAIL (wordsE) ");
		} else {
			printf("PASS ");
		}
		AddOne(wordsF, output);
		if (strcmp(output, "6")) {
			printf("FAIL (wordsF) ");
		} else {
			printf("PASS ");
		}
		AddOne(wordsG, output);
		if (strcmp(output, "10000000000000000000000000000000")) {
			printf("FAIL (wordsG) ");
		} else {
			printf("PASS ");
		}
		AddOne(wordsH, output);
		if (strcmp(output, "1234567891")) {
			printf("FAIL (wordsH) ");
		} else {
			printf("PASS ");
		}
		AddOne(wordsI, output);
		if (strcmp(output, "123456790")) {
			printf("FAIL (wordsI) ");
		} else {
			printf("PASS ");
		}
		AddOne(wordsJ, output);
		if (strcmp(output, "1000000000000001")) {
			printf("FAIL (wordsJ) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Task Nine */
void Test_Histogram(void)
{
	int values0[3] = {0, 0, 1};
	int values1[10] = {1, 0, 3, 1, 2, 4, 5, 6, 2, 2};
	int values2[3] = {1, 0, 1};
	int values3[3] = {0, 1, 0};
	int values4[5] = {0, 1, 2, 3, 4};
	int values5[5] = {4, 3, 2, 1, 0};
	int values6[1] = {1};
	int values7[1] = {10};
	int values8[5] = {5, 5, 5, 5, 5};
	int values9[5] = {0, 0, 5, 0, 0};
	int values10[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};

	char formatted[MAX_ARRAY_SIZE];

	Histogram(formatted, values0, 0);
	if (formatted[0] == '~') {
		printf("\nTask Nine:  Histogram()      - not yet implemented");
	} else {
		printf("\nTask Nine:  Histogram()      - ");
		Histogram(formatted, values1, 10);
		if (strcmp(formatted, "************\n*       X  *\n*      XX  *\n*     XXX  *\n*  X  XXX  *\n*  X XXXXXX*\n*X XXXXXXXX*\n************")) {
			printf("FAIL (values1) ");
		} else {
			printf("PASS ");
		}
		Histogram(formatted, values2, 3);
		if (strcmp(formatted, "*****\n*X X*\n*****")) {
			printf("FAIL (values2) ");
		} else {
			printf("PASS ");
		}
		Histogram(formatted, values3, 3);
		if (strcmp(formatted, "*****\n* X *\n*****")) {
			printf("FAIL (values3) ");
		} else {
			printf("PASS ");
		}
		Histogram(formatted, values4, 5);
		if (strcmp(formatted, "*******\n*    X*\n*   XX*\n*  XXX*\n* XXXX*\n*******")) {
			printf("FAIL (values4) ");
		} else {
			printf("PASS ");
		}
		Histogram(formatted, values5, 5);
		if (strcmp(formatted, "*******\n*X    *\n*XX   *\n*XXX  *\n*XXXX *\n*******")) {
			printf("FAIL (values5) ");
		} else {
			printf("PASS ");
		}
		Histogram(formatted, values6, 1);
		if (strcmp(formatted, "***\n*X*\n***")) {
			printf("FAIL (values6) ");
		} else {
			printf("PASS ");
		}
		Histogram(formatted, values7, 1);
		if (strcmp(formatted, "***\n*X*\n*X*\n*X*\n*X*\n*X*\n*X*\n*X*\n*X*\n*X*\n*X*\n***")) {
			printf("FAIL (values7) ");
		} else {
			printf("PASS ");
		}
		Histogram(formatted, values8, 5);
		if (strcmp(formatted, "*******\n*XXXXX*\n*XXXXX*\n*XXXXX*\n*XXXXX*\n*XXXXX*\n*******")) {
			printf("FAIL (values8) ");
		} else {
			printf("PASS ");
		}
		Histogram(formatted, values9, 5);
		if (strcmp(formatted, "*******\n*  X  *\n*  X  *\n*  X  *\n*  X  *\n*  X  *\n*******")) {
			printf("FAIL (values9) ");
		} else {
			printf("PASS ");
		}
		Histogram(formatted, values10, 9);
		if (strcmp(formatted, "***********\n*    X    *\n*   XXX   *\n*  XXXXX  *\n* XXXXXXX *\n*XXXXXXXXX*\n***********")) {
			printf("FAIL (values10) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Task Ten */
void Test_GoldRush(void)
{

	int results[MAX_ARRAY_SIZE];
	int map0[MAX_MAP_SIZE][MAX_MAP_SIZE] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

	int map1[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{1,2,2,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,4,3,0,0,0,0,9,9,8,0,0,0,0,0},
			{0,2,0,3,3,0,0,9,9,0,0,0,0,0,0},
			{0,0,0,0,0,4,6,9,9,6,0,0,0,0,0},
			{0,0,0,0,0,0,9,0,8,0,0,6,0,0,0},
			{0,0,9,9,9,9,0,0,0,0,7,7,8,8,0},
			{0,0,9,9,9,9,0,0,0,0,0,7,0,0,0},
			{0,0,9,9,9,9,0,1,1,1,2,2,2,2,2},
			{0,0,0,9,9,0,0,0,0,0,0,0,0,3,0},
			{0,0,0,4,4,0,0,0,0,0,0,0,5,6,0},
			{0,0,0,0,9,9,9,0,0,9,0,0,0,5,0},
			{0,0,1,2,9,9,9,0,0,0,9,0,0,4,2},
			{0,0,0,0,9,9,9,0,0,0,9,9,9,0,0},
			{9,9,0,0,0,0,1,0,0,0,0,9,0,0,0},
			{9,0,0,0,0,0,2,2,0,0,0,0,0,0,0}
		};
	int map2[MAX_MAP_SIZE][MAX_MAP_SIZE] = { 
			{9, 9, 9}, 
			{9, 9, 9}, 
			{9, 9, 9}
		};
	int map3[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 9, 9},
			{9, 9, 9},
			{9, 9, 8}
		};
	int map4[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9}
		};

	int map5[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9}
		};
	int map6[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{0}
		};
	int map7[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 0, 9, 0, 9},
			{0, 0, 0, 0, 0},
			{9, 0, 9, 0, 9},
			{0, 0, 0, 0, 0},
			{9, 0, 9, 0, 9},
		};
	int map8[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 0, 9, 0, 9},
			{0, 9, 0, 9, 0},
			{9, 0, 9, 0, 9},
			{0, 9, 0, 9, 0},
			{9, 0, 9, 0, 9},
		};
	int map9[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 0, 0, 0, 9},
			{0, 9, 0, 9, 0},
			{0, 0, 9, 0, 0},
			{0, 9, 0, 9, 0},
			{9, 0, 0, 0, 9},
		};
	int map10[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
		};
	GoldRush(results, 3, 3, map0, 0);
	if (results[0] == 99999) {
		printf("\nTask Ten:   GoldRush(0)      - not yet implemented");
	} else {
		printf("\nTask Ten:   GoldRush(0)      - ");
		GoldRush(results, 15, 15, map1, 0);
		if (results[0] != 39 || results[1] != 3) {
			printf("FAIL (map1) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 3, 3, map2, 0);
		if (results[0] != 9 || results[1] != 1) {
			printf("FAIL (map2) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 3, 3, map3, 0);
		if (results[0] != 8 || results[1] != 0) {
			printf("FAIL (map3) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 1, 11, map4, 0);
		if (results[0] != 10 || results[1] != 0) {
			printf("FAIL (map4) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 1, 1, map5, 0);
		if (results[0] != 1 || results[1] != 0) {
			printf("FAIL (map5) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 1, 1, map6, 0);
		if (results[0] != 0 || results[1] != 0) {
			printf("FAIL (map6) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map7, 0);
		if (results[0] != 9 || results[1] != 0) {
			printf("FAIL (map7) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map8, 0);
		if (results[0] != 13 || results[1] != 0) {
			printf("FAIL (map8) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map9, 0);
		if (results[0] != 9 || results[1] != 0) {
			printf("FAIL (map9) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map10, 0);
		if (results[0] != 25 || results[1] != 9) {
			printf("FAIL (map10) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Bonus Task I */
void Test_GoldRush_BonusI(void)
{

	int results[MAX_ARRAY_SIZE];
	int map0[MAX_MAP_SIZE][MAX_MAP_SIZE] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

	int map1[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{1,2,2,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,4,3,0,0,0,0,9,9,8,0,0,0,0,0},
			{0,2,0,3,3,0,0,9,9,0,0,0,0,0,0},
			{0,0,0,0,0,4,6,9,9,6,0,0,0,0,0},
			{0,0,0,0,0,0,9,0,8,0,0,6,0,0,0},
			{0,0,9,9,9,9,0,0,0,0,7,7,8,8,0},
			{0,0,9,9,9,9,0,0,0,0,0,7,0,0,0},
			{0,0,9,9,9,9,0,1,1,1,2,2,2,2,2},
			{0,0,0,9,9,0,0,0,0,0,0,0,0,3,0},
			{0,0,0,4,4,0,0,0,0,0,0,0,5,6,0},
			{0,0,0,0,9,9,9,0,0,9,0,0,0,5,0},
			{0,0,1,2,9,9,9,0,0,0,9,0,0,4,2},
			{0,0,0,0,9,9,9,0,0,0,9,9,9,0,0},
			{9,9,0,0,0,0,1,0,0,0,0,9,0,0,0},
			{9,0,0,0,0,0,2,2,0,0,0,0,0,0,0}
		};
	int map2[MAX_MAP_SIZE][MAX_MAP_SIZE] = { 
			{9, 9, 9}, 
			{9, 9, 9}, 
			{9, 9, 9}
		};
	int map3[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 9, 9},
			{9, 9, 9},
			{9, 9, 8}
		};
	int map4[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9}
		};

	int map5[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9}
		};
	int map6[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{0}
		};
	int map7[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 0, 9, 0, 9},
			{0, 0, 0, 0, 0},
			{9, 0, 9, 0, 9},
			{0, 0, 0, 0, 0},
			{9, 0, 9, 0, 9},
		};
	int map8[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 0, 9, 0, 9},
			{0, 9, 0, 9, 0},
			{9, 0, 9, 0, 9},
			{0, 9, 0, 9, 0},
			{9, 0, 9, 0, 9},
		};
	int map9[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 0, 0, 0, 9},
			{0, 9, 0, 9, 0},
			{0, 0, 9, 0, 0},
			{0, 9, 0, 9, 0},
			{9, 0, 0, 0, 9},
		};
	int map10[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
		};
	GoldRush(results, 3, 3, map0, 1);
	if (results[0] == 99999) {
		printf("\nTask Ten:   GoldRush(1)      - not yet implemented");
	} else {
		printf("\nBonus I:    GoldRush(1)      - ");
		GoldRush(results, 15, 15, map1, 1);
		if (results[0] != 21 || results[1] != 9 || results[2] != 6 || results[3] != 3) {
			printf("FAIL (map1) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 3, 3, map2, 1);
		if (results[0] != 9) {
			printf("FAIL (map2) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 3, 3, map3, 1);
		if (results[0] != 8) {
			printf("FAIL (map3) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 1, 11, map4, 1);
		if (results[0] != 6 || results[1] != 4) {
			printf("FAIL (map4) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 1, 1, map5, 1);
		if (results[0] != 1) {
			printf("FAIL (map5) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 1, 1, map6, 1);
		if (results[0] != 0) {
			printf("FAIL (map6) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map7, 1);
		if (results[0] != 1 || results[1] != 1 || results[2] != 1 || results[3] != 1 || results[4] != 1 || results[5] != 1 || results[6] != 1 || results[7] != 1 || results[8] != 1) {
			printf("FAIL (map7) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map8, 1);
		if (results[0] != 13) {
			printf("FAIL (map8) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map9, 1);
		if (results[0] != 9) {
			printf("FAIL (map9) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map10, 1);
		if (results[0] != 25) {
			printf("FAIL (map10) ");
		} else {
			printf("PASS ");
		}
	}
}

/* A function to test Bonus Task II */
void Test_GoldRush_BonusII(void)
{

	int results[MAX_ARRAY_SIZE];
	int map0[MAX_MAP_SIZE][MAX_MAP_SIZE] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

	int map1[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{1,2,2,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,4,3,0,0,0,0,9,9,8,0,0,0,0,0},
			{0,2,0,3,3,0,0,9,9,0,0,0,0,0,0},
			{0,0,0,0,0,4,6,9,9,6,0,0,0,0,0},
			{0,0,0,0,0,0,9,0,8,0,0,6,0,0,0},
			{0,0,9,9,9,9,0,0,0,0,7,7,8,8,0},
			{0,0,9,9,9,9,0,0,0,0,0,7,0,0,0},
			{0,0,9,9,9,9,0,1,1,1,2,2,2,2,2},
			{0,0,0,9,9,0,0,0,0,0,0,0,0,3,0},
			{0,0,0,4,4,0,0,0,0,0,0,0,5,6,0},
			{0,0,0,0,9,9,9,0,0,9,0,0,0,5,0},
			{0,0,1,2,9,9,9,0,0,0,9,0,0,4,2},
			{0,0,0,0,9,9,9,0,0,0,9,9,9,0,0},
			{9,9,0,0,0,0,1,0,0,0,0,9,0,0,0},
			{9,0,0,0,0,0,2,2,0,0,0,0,0,0,0}
		};
	int map2[MAX_MAP_SIZE][MAX_MAP_SIZE] = { 
			{9, 9, 9}, 
			{9, 9, 9}, 
			{9, 9, 9}
		};
	int map3[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 9, 9},
			{9, 9, 9},
			{9, 9, 8}
		};
	int map4[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9}
		};

	int map5[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9}
		};
	int map6[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{0}
		};
	int map7[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 0, 9, 0, 9},
			{0, 0, 0, 0, 0},
			{9, 0, 9, 0, 9},
			{0, 0, 0, 0, 0},
			{9, 0, 9, 0, 9},
		};
	int map8[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 0, 9, 0, 9},
			{0, 9, 0, 9, 0},
			{9, 0, 9, 0, 9},
			{0, 9, 0, 9, 0},
			{9, 0, 9, 0, 9},
		};
	int map9[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 0, 0, 0, 9},
			{0, 9, 0, 9, 0},
			{0, 0, 9, 0, 0},
			{0, 9, 0, 9, 0},
			{9, 0, 0, 0, 9},
		};
	int map10[MAX_MAP_SIZE][MAX_MAP_SIZE] = {
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
			{9, 9, 9, 9, 9},
		};
	GoldRush(results, 3, 3, map0, 2);
	if (results[0] == 99999) {
		printf("\nTask Ten:   GoldRush(2)      - not yet implemented");
	} else {
		printf("\nBonus II:   GoldRush(2)      - ");
		GoldRush(results, 15, 15, map1, 2);
		if (results[0] != 2 || results[1] != 1) {
			printf("FAIL (map1) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 3, 3, map2, 2);
		if (results[0] != 1) {
			printf("FAIL (map2) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 3, 3, map3, 2);
		if (results[0] != 0) {
			printf("FAIL (map3) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 1, 11, map4, 2);
		if (results[0] != 0) {
			printf("FAIL (map4) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 1, 1, map5, 2);
		if (results[0] != 0) {
			printf("FAIL (map5) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 1, 1, map6, 2);
		if (results[0] != 0) {
			printf("FAIL (map6) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map7, 2);
		if (results[0] != 0) {
			printf("FAIL (map7) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map8, 2);
		if (results[0] != 0) {
			printf("FAIL (map8) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map9, 2);
		if (results[0] != 0) {
			printf("FAIL (map9) ");
		} else {
			printf("PASS ");
		}
		GoldRush(results, 5, 5, map10, 2);
		if (results[0] != 9) {
			printf("FAIL (map10) ");
		} else {
			printf("PASS ");
		}
	}
}