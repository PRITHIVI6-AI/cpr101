// FUNDAMENTAL MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS // disable securtiy warning for function like 'fgets' 
#define BUFFER_SIZE 80 // define the size the buffer for input string to 80
#define NUM_INPUT_SIZE 10 // define the size NUM_INPUT_SIZE to 10
#include "fundamentals.h" // header file for function prototype

void fundamentals(void) {  // function defination
	/* Version 1 */
	printf("*** Start of Indexing Strings Demo ***\n"); // print the start message
	char buffer1[BUFFER_SIZE];// variables decleration
	char numInput[NUM_INPUT_SIZE]; // variables decleration
	size_t position; // variables decleration
	do {
		printf("Type not empty string  (q - to quit):\n"); //prompt the user for input
		fgets(buffer1, BUFFER_SIZE, stdin); // read input string from the user
		buffer1[strlen(buffer1) - 1] = '\0'; // remove the newline character at the end of the input sting
		if (strcmp(buffer1, "q") != 0) //check if the user wants to quit
		{
			printf("Type the character position within the string:\n");// Prompt the user for input
			fgets(numInput, NUM_INPUT_SIZE, stdin);// read input numerical value from the user
			numInput[strlen(numInput) - 1] = '\0';// remove the newline character from numeric value
			position = atoi(numInput); // convert input numerical value to an integer
			if (position >= strlen(buffer1)) // check if the position is greater then or equal to the lenght of string 
			{  
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduce to max. availbale\n");
			}
			printf("The character Found at %d position is \'%c\'\n", (int)position, buffer1[position]); // print the character found
		}
	} while (strcmp(buffer1, "q") != 0); // repeat the process until user type "q"
	printf("*** End of  Indexing Strings Demo ***\n\n"); // print the end message


	/* Version 2 */



	/* Version 3 */
}
