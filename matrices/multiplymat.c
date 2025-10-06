/*
Student ID:
Student Name: Raja M. Sumeer
Module: Programming 2 @ Year 2, Semester 1 (Technological University Dublin)

Date: 26/11/2024 10:14

Code Purpose:
- Multiply two matrices and send result to Matrice C (+ txt file output)

Tasks:

Honest Owning of Code: Yes, implementing previous tasks knowledge and methods where relevant.
Supporting Code from Author(s):
Due Credits: 
- For loop demonstration from John
- Multiplication of matrices demonstration by John
*/

#include <stdio.h> // define preprocessor directive library for basic functions

int main() {

int matrixA[20][20];
int matrixB[20][20];
int matrixC[20][20];

int row, col, k; // define integer variables for array rows, columns and extra variable if needed
int counter = 0; // counter for matrix a
int secondcounter = 0; // another counter for matrix b

FILE *oneMatrix, *secondMatrix, *thirdMatrix, *readArrayFile, *readArrayFile2; // define file pointers
FILE *fourthMatrix; // define file pointers

// create Array1.txt

oneMatrix = fopen("Array1.txt", "w"); // create the initial Array1 file
fprintf(stdout, "Array1.txt has been created.\n"); // notify that Array1.txt was created

// load Array1.txt with matrix A values

for (row = 0; row < 20; row++) { // increment rows
    for (col = 0; col < 20; col++) { // increment columns
        matrixA[row][col] = counter++; // increment matrix by counter
        fprintf(oneMatrix, "%d\t", matrixA[row][col]); // write values to Array1.txt
    }
    fprintf(oneMatrix, "\n"); // new seperate line
}
fclose(oneMatrix); // close Array1.txt after all values written
fprintf(stdout, "Array1.txt successful.\n");

// create Array2.txt

secondMatrix = fopen("Array2.txt", "w"); // create the initial Array2 file
fprintf(stdout, "Array2.txt has been created.\n"); // notify that Array2.txt was created

// load Array2.txt with matrix B values

for (row = 0; row < 20; row++) { // increment rows
    for (col = 0; col < 20; col++) { // increment columns 
        matrixB[row][col] = secondcounter++; // increment counter and each R x C for matrix B by counter
        fprintf(secondMatrix, "%d\t", matrixB[row][col]); // write result to Array2.txt
    }
    fprintf(secondMatrix, "\n"); // new seperate line
} // end of for loop
fclose(secondMatrix); // close Array2.txt after all values written
fprintf(stdout, "Array2.txt successful.\n");

// [section] read in Array.txt values to Matrixs

readArrayFile = fopen("Array1.txt", "r"); // read Array1.txt file
if (readArrayFile == NULL) { // check reading state => file exists or can be accessed
    printf("Array1.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 1; // return error code 1 to shell, operation unsuccessful
}

// reading in values from Array1.txt to matrix A 
for (row = 0; row < 20; row++) { // read rows
    for (col = 0; col < 20; col++) { // read columns
    fscanf(readArrayFile, "%d", &matrixA[row][col]); // read in values to matrix A
    }
} // end of for loop
fclose(readArrayFile); // close Array1.txt after all values read

// reading in values from Array2.txt to matrix B
readArrayFile2 = fopen("Array2.txt", "r"); // read Array2.txt file
if (readArrayFile2 == NULL) { // check reading state => file exists or can be accessed
    printf("Array2.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 2; // return error code 2 to shell, operation unsuccessful
}

// reading in values from Array1.txt to matrix B
for (row = 0; row < 20; row++) { // read rows
    for (col = 0; col < 20; col++) { // read columns
    fscanf(readArrayFile2, "%d", &matrixB[row][col]); // read in values to matrix B
    }
} // end of for loop
fclose(readArrayFile2); // close Array2.txt after all values read

// Multiply Matrix A and B and store in Matrix C

for (row = 0; row < 20; row++) { // increment rows
    for (col = 0; col < 20; col++) { // increment columns
        matrixC[row][col] = 0; // initialize matrixC to 0 to avoid junk values
        matrixC[row][col] += matrixA[row][col] * matrixB[row][col]; // multiply matrix A and B to get result and store in matrix C
    }
} // end of for loop

// outputting result to textfile (matrix C)

fourthMatrix = fopen("Array3.txt", "w"); // create the result Array3 file
fprintf(stdout, "Array3.txt has been created.\n"); // notify that Array3.txt was created

for (row = 0; row < 20; row++) { // increment rows
    for (col = 0; col < 20; col++) { // increment columns
        fprintf(fourthMatrix, "%d\t", matrixC[row][col]); // print out matrixC (A x B result)
    }
    fprintf(fourthMatrix, "\n"); // new seperate line
} // end of for loop

fclose(fourthMatrix); // close Array3.txt after all values written
fprintf(stdout, "Array3.txt successful.\n"); // notify that Array3.txt was created

return 0;

} // end of main loop
