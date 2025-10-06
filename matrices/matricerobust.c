/*
Student ID:
Student Name: Raja M. Sumeer
Module: Programming 2 @ Year 2, Semester 1 (Technological University Dublin)

Date: 03/12/2024 16:10

Code Purpose:
Matrice manipulation and arithmetic of matrices
Using functions for redundancy

Tasks:

Supporting Code from Author(s):
Due Credits: 
*/

#include <stdio.h> // define preprocessor directive library for basic functions

// function to create Array1.txt
void writeFile1() {
FILE *oneMatrix; // define file pointers
oneMatrix = fopen("Array1.txt", "w"); // create the initial Array1 txt file
fprintf(stdout, "Array1.txt has been created.\n"); // print out to let you know first file was created
fclose(oneMatrix); // close file
}

// function to create Array2.txt
void writeFile2() {
FILE *secondMatrix; // define file pointers
secondMatrix = fopen("Array2.txt", "w"); // create the initial Array2 txt file
fprintf(stdout, "Array2.txt has been created.\n"); // print out to let you know second file was created
fclose(secondMatrix); // close file
}

// function to create Array3.txt
void writeFile3() {
FILE *thirdMatrix; // define file pointers
thirdMatrix = fopen("Array3.txt", "w"); // create the initial Array3 txt file
fprintf(stdout, "Array3.txt has been created.\n"); // print out to let you know third file was created
fclose(thirdMatrix); // close file
}

// function to write values to Matrix A (Array1.txt)
int writeMatrixA() {
int counter = 0; // int counter to count matrix R x C
int matrixA[3][2];
int row, col;
FILE *oneMatrix; // define file pointers
oneMatrix = fopen("Array1.txt", "w"); // open the created Array1 file
if (oneMatrix == NULL) { // check reading state => file exists or can be accessed
    fprintf(stdout, "Array1.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 3; // return error code 3 to shell, operation unsuccessful
}
for (row = 0; row < 3; row++) { // increment through rows
    for (col = 0; col < 2; col++) { // increment through columns
        matrixA[row][col] = counter++; // increment count row + column array 
        fprintf(oneMatrix, "%d\t", matrixA[row][col]); // write to Array1.txt
    }
    fprintf(oneMatrix, "\n"); // new line to seperate
} // end of for loop
fclose(oneMatrix); // close the file with changes after all array values have been written to Array1.txt
fprintf(stdout, "Array1.txt successful.\n"); // print out process result
return 0; // return success code to shell
}

// function to write values to Matrix B (Array2.txt)
int writeMatrixB() {
int secondcounter = 0; // int counter to count matrix R x C
int matrixB[2][3];
int row, col;
FILE *secondMatrix; // define file pointers
secondMatrix = fopen("Array2.txt", "w"); // open the created Array2 file
if (secondMatrix == NULL) { // check reading state => file exists or can be accessed
    fprintf(stdout, "Array2.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 3; // return error code 3 to shell, operation unsuccessful
}
// initialize matrix B with values and write contents to Array2.txt
for (row = 0; row < 2; row++) { // increment through rows
    for (col = 0; col < 3; col++) { // increment through columns
        matrixB[row][col] = secondcounter++; // increment count row + column array 
        fprintf(secondMatrix, "%d\t", matrixB[row][col]); // write to Array2.txt
    }
    fprintf(secondMatrix, "\n"); // new line to seperate
} // end of for loop
fclose(secondMatrix); // close the file with changes after all array values have been written to Array2.txt
fprintf(stdout, "Array2.txt successful.\n"); // print out process result
return 0; // return success code to shell
}

// function to read in values from Array1.txt and populate matrix A
int readMatrixA(int matrixA[3][2]) {
int row, col; // define variables for row, column
FILE *readArrayFile; // define file pointers
readArrayFile = fopen("Array1.txt", "r"); // read Array1.txt file
if (readArrayFile == NULL) { // check reading state => file exists or can be accessed
    fprintf(stdout, "Array1.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 3; // return error code 3 to shell, operation unsuccessful
}

// reading in values from Array1.txt to matrix A 
for (row = 0; row < 3; row++) { // read rows
    for (col = 0; col < 2; col++) { // read columns
    fscanf(readArrayFile, "%d", &matrixA[row][col]); // read in values to matrix A
    // fprintf(stdout, "%d\t", matrixA[row][col]); // print out matrix A
    }
    // fprintf(stdout, "\n"); // new line to seperate
} // end of for loop
fclose(readArrayFile); // close Array1.txt after all values read
return 0; // return success code to shell
}

// function to read in values from Array2.txt and populate matrix B
int readMatrixB(int matrixB[2][3]) {
int row, col; // define variables for row, column
FILE *readArrayFile2; // define file pointers
readArrayFile2 = fopen("Array2.txt", "r"); // read Array2.txt file
if (readArrayFile2 == NULL) { // check reading state => file exists or can be accessed
    printf("Array2.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 2; // return error code 1 to shell, operation unsuccessful
}

// reading in values from Array2.txt to matrix B
for (row = 0; row < 2; row++) { // read rows
    for (col = 0; col < 3; col++) { // read columns
    fscanf(readArrayFile2, "%d", &matrixB[row][col]); // read in values to matrix B
    // fprintf(stdout, "%d\t", matrixB[row][col]); // print out matrix B
    }
    // fprintf(stdout, "\n"); // new line to seperate
} // end of for loop
fclose(readArrayFile2); // close Array2.txt after all values read
return 0; // return success code to shell
}

// function to multiply matrix A and B and store in matrix C
void matrixMultiplyC(int matrixC[3][3], int matrixA[3][2], int matrixB[2][3]) {
int row, col, k; // define variables for row, column and extra variable
for (row = 0; row < 3; row++) { // increment rows
    for (col = 0; col < 3; col++) { // increment columns
        matrixC[row][col] = 0; // initialize matrixC to 0 to avoid junk values
         for (k = 0 ; k < 2; k++) { // columns
        matrixC[row][col] += matrixA[row][k] * matrixB[k][col]; // multiply a and b to get result and store in matrix c
         }
    }
} // end of for loop
}

// function to send the result of matrix C to Command Line
void matrixMultiplyCResult(int matrixC[3][3]) {
int row, col; // define variables for row, column
fprintf(stdout, "\nResult of Matrix A x Matrix B:\n"); // print out to notify about result
// print out multiplication result of matrix a and b from matrix c
for (row = 0; row < 3; row++) { // increment rows
    for (col = 0; col < 3; col++) { // increment columns
        fprintf(stdout, "%d\t", matrixC[row][col]); // print out matrix c
    }
    fprintf(stdout, "\n"); // new line to seperate
} // end of for loop
}

int writeMatrixD(int matrixD[3][3]) {
int thirdcounter = 0; // another counter for matrix d
int row, col; // define variables for row, column
FILE *thirdMatrix; // define file pointers
thirdMatrix = fopen("Array3.txt", "w"); // open the created Array3 file
if (thirdMatrix == NULL) { // check reading state => file exists or can be accessed
    printf("Array3.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 3; // return error code 3 to shell, operation unsuccessful
}
// initialize matrix D with values and write contents to Array3.txt
for (row = 0; row < 3; row++) { // increment through rows
    for (col = 0; col < 3; col++) { // increment through columns
        matrixD[row][col] = thirdcounter++; // increment count row + column array 
        fprintf(thirdMatrix, "%d\t", matrixD[row][col]); // write to Array3.txt
    }
    fprintf(thirdMatrix, "\n"); // new line to seperate
} // end of for loop
fclose(thirdMatrix); // close the file with changes after all array values have been written to Array3.txt
fprintf(stdout, "\nArray3.txt successful.\n"); // print out process result
return 0; // return success code to shell
}

int readMatrixD(int matrixD[3][3]) {
int row, col; // define variables for row, column
FILE *readArrayFile3; // define file pointers
readArrayFile3 = fopen("Array3.txt", "r"); // read Array3.txt file
if (readArrayFile3 == NULL) { // check reading state => file exists or can be accessed
    printf("Array3.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 3; // return error code 3 to shell, operation unsuccessful
}

// reading in values from Array3.txt to matrix D
for (row = 0; row < 3; row++) { // read rows
    for (col = 0; col < 3; col++) { // read columns
    fscanf(readArrayFile3, "%d", &matrixD[row][col]); // read in values to matrix D
    // fprintf(stdout, "%d\t", matrixD[row][col]); // print out matrix D
    }
    // fprintf(stdout, "\n"); // new line to seperate
} // end of for loop
fclose(readArrayFile3); // close Array3.txt after all values read
return 0; // return success code to shell
}

void matrixEAdd(int matrixE[3][3], int matrixC[3][3], int matrixD[3][3]) {
int row, col; // define variables for row, column
for (row = 0; row < 3; row++) { // increment rows
    for (col = 0; col < 3; col++) { // increment columns
        matrixE[row][col] = 0; // initialize matrixE to 0 to avoid junk values
        matrixE[row][col] = matrixC[row][col] + matrixD[row][col]; // add c and d to get result and store in matrix E
    }
} // end of for loop
}

void matrixEAddResult(int matrixE[3][3]) {
int row, col; // define variables for row, column
fprintf(stdout, "\nResult of Matrix C + Matrix D:\n"); // print out to notify about result
// print out addition result of matrix c and d from matrix e
for (row = 0; row < 3; row++) { // increment rows
    for (col = 0; col < 3; col++) { // increment columns
        fprintf(stdout, "%d\t", matrixE[row][col]); // print out matrix c
    }
    fprintf(stdout, "\n"); // new line to seperate
} // end of for loop
}

int main() { // start of & definition of main loop

writeFile1(); // call function
writeFile2(); // call function
writeFile3(); // call function

int matrixA[3][2];
int matrixB[2][3];
int matrixC[3][3];

writeMatrixA(); // call function
writeMatrixB(); // call function

// Part (i)
readMatrixA(matrixA); // call function
readMatrixB(matrixB); // call function

// Part (ii) A x B
matrixMultiplyC(matrixC, matrixA, matrixB); // call function
matrixMultiplyCResult(matrixC); // call function

// Part (iii)

int matrixD[3][3];
int matrixE[3][3];

writeMatrixD(matrixD); // call function
readMatrixD(matrixD); // call function

matrixEAdd(matrixE, matrixC, matrixD); // call function
matrixEAddResult(matrixE); // call function

return 0;

} // end of main loop
