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


/*SereyPunleur Sor*/

float invertAllValues(int myArray[]) {
    for (int i = 0; i < 500; ++i) {
        myArray[i] = myArray[i] * -1;
    }
    return 0;
}



