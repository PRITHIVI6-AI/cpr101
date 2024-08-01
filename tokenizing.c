// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS // Disable secure warnings
#define BUFFER_SIZE 300 // Define buffer size
#include "tokenizing.h" // Include tokenizing header

// V1
void tokenizing(void) {
    printf("*** Start of Tokenizing Words Demo ***\n"); // Print start message
    char words[BUFFER_SIZE]; // Buffer to hold input words
    char* nextWord = NULL; // Pointer to hold the next word
    int wordsCounter; // Counter for words
    do {
        printf("Type a few words separated by space (q - to quit):\n"); // Prompt user for input
        fgets(words, BUFFER_SIZE, stdin); // Get input from the user
        words[strlen(words) - 1] = '\0'; // Remove newline character from input
        if (strcmp(words, "q") != 0) { // Check if input is not 'q'
            nextWord = strtok(words, " "); // Get the first word
            wordsCounter = 1; // Initialize word counter
            while (nextWord) { // Loop through all words
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); // Print each word with its position
                nextWord = strtok(NULL, " "); // Get the next word
            }
        }
    } while (strcmp(words, "q") != 0); // Repeat until input is 'q'
    printf("*** End of Tokenizing Words Demo ***\n"); // Print end message
}
