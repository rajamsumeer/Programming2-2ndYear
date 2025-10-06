/*
Student ID:
Student Name: Raja M. Sumeer
Module: Programming 2 @ Year 2, Semester 1 (Technological University Dublin)

Date: 26/11/2024 10:14

Code Purpose:
- Generate textfiles using Matrices as memory for values

Tasks:

Supporting Code from Author(s):
Due Credits: 
- For loop demonstration from John
*/

#include <stdio.h> // define preprocessor directive library for basic functions

int main() {

FILE *fptrCreate, *fptr; // define file pointers for creating & later read + write
fptrCreate = fopen("file1.txt", "w"); // create the initial first file
printf("File 1 has been created.\n"); // print out to let you know first file was created

int numericalMatrixA[21][21][4];// 20 rows, 20 columns, 3 elements

int i; // define integer return variable
int j; // define integer return variable
int k; // define integer return variable

for (i = 0; i < 21; i++) { // for loop for populating array[][][] (row)
    for (j = 0; j < 21; j++) { // column
        for (k = 0; k < 4; k++) { // row
            numericalMatrixA[i][j][k]; // put values into array[][][]
        }
    }
} // end of for loop

for (i = 0; i < 21; i++) { // read values from populated array using for loop (row)
    for (j = 0; j < 21; j++) { // column
        for (k = 0; k < 4; k++) { // element
        fprintf(fptrCreate, "%d %d %d\t", i, j, k); // write output of for loops / array readings to file
        }
    }
} // end of for loop

fclose(fptrCreate); // close the file with changes after all array values have been written to file
fprintf(stdout, "Array values have been written to file.");

return 0;

} // end of main loop
