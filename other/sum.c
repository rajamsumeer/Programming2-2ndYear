/*
Student ID: 
Student Name: Raja Sumeer
Date: 30/10/2024 15:02
Code Purpose: Adds numbers together from arguments and creates a result text file.
Supporting Code from Author(s): Mark Deegan via xxCLA03.c code from Github
Credits: Joseph Obong for <stdlib.h> and atoi explanation
Credits: Mark Deegan for Textfile creation on Brightspace under "File Handling in C"
Credits: saving a file to a folder - https://www.reddit.com/r/C_Programming/comments/qkk624/fopenfiletxt_vs_fopenusersmynamefiletxt/
*/
#include <stdio.h> // define library for basic functions
#include <stdlib.h> // define library for other functions such as atio
#include <math.h> // define advanced math functions library in case its needed
int main(int argc, char* argv[]) { // start of main loop
    int integerArgs; // define integer for storing input values
    int i; // define integer variable i
    int value; // define integer variable value as 0;
    int value2; // define integer variable value 2 to add to value.
    int total = 0; // define integer variable to store the total.
    integerArgs = argc -1; // number of arguments provided in argc
    
    // now using an example from Joseph to use only one for loop
    // for loop to convert arguments and sum arguments
    if (integerArgs> 0) {
    for (i = 1; i <= integerArgs; i++) {
        value = atoi(argv[i]); // convert each argument into a numerical value
        total += value; // add arguments together for total
        // experimental errors using + resulted in output being 0
        printf("[%d] %s\n", i, argv[i]); // print each given argument in a organised [] form
    }
    printf("\nYour result is %d", total); // print result of arguments
    }

    // create a text file for results
    FILE *fptr; // declare file pointer
    fptr = fopen("Lesson2/results.txt", "w"); // create a new file on the write mode under Lesson2 folder
    fprintf(fptr, "Your result is %d", total); // write result into it
    fclose(fptr); // saved changes and close file

    // START OF PART 2
    // MIN VALUE
    int minvalue = atoi(argv[1]); // define the first input for min term
    int maxvalue; // define integer variable to store max term
    int finalvalue;
    for (i = 1; i <= integerArgs; i++) { // for loop to find the terms
    maxvalue = atoi(argv[i]); // convert to numerical value
    } // end of i loop
    if (minvalue < maxvalue) { // if min is less than max, final (min val) is min
        finalvalue = minvalue;
    } else if (minvalue > maxvalue) { // if min is greater than max, final (min val) is max val
        finalvalue = maxvalue;
    }
    printf("\nThe min value of those numbers is: %d", finalvalue); // print min value`

    // MAX VALUE
    if (minvalue < maxvalue) { // if min val is less than max val then max val is max 
        finalvalue = maxvalue;
    } else if (minvalue > maxvalue) { // if min val is greater than max val then max val is min val
        finalvalue = minvalue;
    }
    printf("\nThe max value of those numbers is: %d", finalvalue); // print max value

    // AVERAGE
    float divsummed; // define floating variable to handle . points
    divsummed = total / integerArgs; // divide the total by number of inputs to get average
    printf("\nThe average of those numbers is: %1.f", divsummed); // print average

    return 0;
} // end of main loop
