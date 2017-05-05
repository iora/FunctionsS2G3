#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

	return 1;
}

/*Sowathana Yong*/
int getSumOfSquares(int myArray[]) {

    int square = 1;
    int sumOfSquare = 0;
    for (int i = 0; i < 500; i++) {
        square = myArray[i] * myArray[i];
        sumOfSquare += square;
    }
    return sumOfSquare;
}

/*Sowathana Yong*/
int getSum(int myArray[]) {
    int sum = 0;
    for (int i = 0; i < 500; ++i) {
        sum += myArray[i];
    }
    return sum;
}


void printGroupMemberNames() {
	printf("Vichet Keng\n ");
	printf("Sowathana Yong\n ");
	printf("SereyPunleur Sor\n ");
	printf("Heng Toun Oeng\n ");
	printf("That's it!\n");
}

/*Vichet Keng*/

int subtractAllValues(int myArray[]) {
    int result = 0;
    for (int i = 0; i < 500; i++) {
        result -= myArray[i];
    }
    return result;
}

