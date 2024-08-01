// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS  //This macros will avoid the security warnings that are generated while using C functions.
#define BUFFER_SIZE 80 //This macros will define a constant variable name "BUFFER_SIZE" whose value is assgined is 80
#include "manipulating.h" //manipulating.h header file is created to let compiler know that there is manipulating function in this program.

	/* Version 1 */
void manipulating(void) {        // manipulating function is written and void returns no value
		printf("*** Start of Concatenating Strings Demo ***\n");  //printf function is used to print the message.
	char string1[BUFFER_SIZE];  //Array named 'string1' is declared whose size is 80
	char string2[BUFFER_SIZE];   //Array named 'string2' is declared whose size is 80

	//use of do-while construct: 
	do {
		printf("Type the 1st strings (q - to quit :\n");  //printf function is used to print the message
		fgets(string1, BUFFER_SIZE, stdin);  //Use of fgets function to read the string from standard input who value to be read is 80.
		string1[strlen(string1) - 1] = '\0'; // '/0/ will remove the newline character. strlen returns the length of the string1 which is subtracted by 1.

		if ((strcmp(string1, "q") != 0)) {  //Use of if condtion to check whether the user input in string1 is equal to q. Not operator is used to execute the remaining block of codes: 
			printf("Type the 2nd string:\n");  //printf function will print the message and prompt the user to input value.
			fgets(string2, BUFFER_SIZE, stdin);  // It is used to read the line whose value is 80 (max) from the standard input.
			string2[strlen(string2) - 1] = '\0'; // '/0/ will remove the newline character. strlen returns the length of the string2 which is subtracted by 1.
			strcat(string1, string2);  //This line is used to append the output of string2 to string1. 
			printf("Concatenated string is \'%s\'\n", string1);  // it is used to print the message whose value is stored in string1.
		}
	} while (strcmp(string1, "q") != 0);  //while contruct is used to end the if contruct and it refelct that looop should continue as long as string1 is equal to 'q'.
	printf("*** End of Concatenating Strings Demo ***\n\n");  // printf function is used to print the message.
}

