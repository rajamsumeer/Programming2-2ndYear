/* Mark Deegan Mon 28 Oct 2024 13:16:29 GMT
xxSquare03.c
C programme to accept command-line arguments and to print a hollow square on the console using character specified
*/

#include <stdio.h>	// required for the printf function
#include <stdlib.h>	// required for the atoi function
#include <math.h> // define math functions in case
#define SQUARE_SIZE 10
#define DIV 5/3 //define aspect ratio for walls
/*
Student ID:
Student Name: Raja Sumeer
Date: 31/10/2024 22:57
Code Purpose: Shapes output & arguments.
Validation of Code:
Credits: Matas N for side wall ratio to make the shape more into a square
Supporting Code from Author(s): Mark Deegan via xxSquare03.c
*/
int main(int argc, char** argv)
{	// start of main loop
	int numArgs = argc;	// copy the numnber of Command-Line Arguments
	if (numArgs == 0) { // if no args given print programme name and prompt for args
		printf("The name of the programme was: %s\n\nPlease provide some arguments.\n", argv[0]);
	} else if (numArgs < 3) { // if less than 2 args given, print programme name and prompt for args
		printf("The name of the programme was: %s\n\nPlease provide two arguments.\nSpecify a width length and character.\n", argv[0]);
	} else { // if conditions fulfilled, run the code
	char use = argv[2][0];
	int side_len = SQUARE_SIZE;
	side_len = atoi(argv[1]);

	for (int i=0; i < side_len; i++)
	{	// begin printing rows
		for (int j = 0; j < (side_len * DIV); j++) // increase side wall ratio
		{ // start printing columns
			if( (j>0) && (j<((side_len * DIV)-1) )&& (i>0) && (i<(side_len-1)) ) printf(" "); // increase side wall ratio	
			else printf("%c",use);
		} // end printing columns
		printf("\n");
	}	// end printing rows
	} // end of else condition
}	// end declaration of main method
