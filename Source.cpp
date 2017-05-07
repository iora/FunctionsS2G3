#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]); //clear
int getSumOfSquares(int myArray[]); //clear
void printAsChars(int myArray[]); //clear
double getAverage(int myArray[]); //clear
int subtractAllValues(int myArray[]); //clear
float invertAllValues(int myArray[] ); //clear
void printGroupMemberNames(); //clear

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

	return 1;
}

/*Sowathana Yong*/
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

/*HengToun Oeng*/
void printAsChars(int myArray[]) {
    for (int i = 0; i < 500; i++) {
        printf("%c ", myArray[i]);
    }
}

//invertAllvalues fixed

float invertAllValues(int myArray[]) {
    float invert = 0;
    for (int i = 0; i < 500; ++i) {
    	myArray[i] = invert;
        invert = 1 / myArray[i];
    }
    return 0;
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

/*Sowathana Yong*/
double getAverage(int myArray[]){
    int sum = 0;
    for (int i = 0; i < 500; ++i) {
        sum += myArray[i];
    }
    return sum/500;
}

