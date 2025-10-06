/*
Student ID:
Student Name: Raja M. Sumeer
Module: Programming 2 @ Year 2, Semester 1 (Technological University Dublin)

Date: 03/12/2024 11:16

Code Purpose:
- Matrice manipulation and arithmetic of matrices

Tasks:

Supporting Code from Author(s):
Due Credits: 
- Joseph O.
*/

#include <stdio.h> // define preprocessor directive library for basic functions

int main() {

int matrixA[3][2];
int matrixB[2][3];
int counter = 0; // counter for matrix a
int secondcounter = 0; // another counter for matrix b
int thirdcounter = 0; // another counter for matrix d
int row, col, k; // define variables for row, column and extra variable when needed

FILE *oneMatrix, *secondMatrix, *thirdMatrix, *readArrayFile, *readArrayFile2, *readArrayFile3; // define file pointers
oneMatrix = fopen("Array1.txt", "w"); // create the initial Array1 txt file
fprintf(stdout, "Array1.txt has been created.\n"); // print out to let you know first file was created

// initialize matrix A with values and write contents to Array1.txt
for (row = 0; row < 3; row++) { // increment through rows
    for (col = 0; col < 2; col++) { // increment through columns
        matrixA[row][col] = counter++; // increment count row + column array 
        fprintf(oneMatrix, "%d\t", matrixA[row][col]); // write to Array1.txt
    }
    fprintf(oneMatrix, "\n"); // new line to seperate
} // end of for loop
fclose(oneMatrix); // close the file with changes after all array values have been written to Array1.txt
fprintf(stdout, "Array1.txt successful.\n"); // print out process result

secondMatrix = fopen("Array2.txt", "w"); // create the initial Array2 txt file
fprintf(stdout, "Array2.txt has been created.\n"); // print out to let you know second file was created

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

// Part (i)
readArrayFile = fopen("Array1.txt", "r"); // read Array1.txt file
if (readArrayFile == NULL) { // check reading state => file exists or can be accessed
    printf("Array1.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 1; // return error code 1 to shell, operation unsuccessful
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

// Part (ii) A x B

int matrixC[3][3]; // define a 3 x 3 matrice to return as integer values
for (row = 0; row < 3; row++) { // increment rows
    for (col = 0; col < 3; col++) { // increment columns
        matrixC[row][col] = 0; // initialize matrixC to 0 to avoid junk values
         for (k = 0 ; k < 2; k++) { // columns
        matrixC[row][col] += matrixA[row][k] * matrixB[k][col]; // multiply a and b to get result and store in matrix c
         }
    }
} // end of for loop

fprintf(stdout, "\nResult of Matrix A x Matrix B:\n"); // print out to notify about result
// print out multiplication result of matrix a and b from matrix c
for (row = 0; row < 3; row++) { // increment rows
    for (col = 0; col < 3; col++) { // increment columns
        fprintf(stdout, "%d\t", matrixC[row][col]); // print out matrix c
    }
    fprintf(stdout, "\n"); // new line to seperate
} // end of for loop

// Part (iii)

int matrixD[3][3];
int matrixE[3][3];

thirdMatrix = fopen("Array3.txt", "w"); // create the initial Array3 txt file
fprintf(stdout, "\nArray3.txt has been created."); // print out to let you know third file was created
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

readArrayFile3 = fopen("Array3.txt", "r"); // read Array3.txt file
if (readArrayFile3 == NULL) { // check reading state => file exists or can be accessed
    printf("Array3.txt cannot be accessed for reading. Verify it exists and try again.\n");
    return 3; // return error code 1 to shell, operation unsuccessful
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

for (row = 0; row < 3; row++) { // increment rows
    for (col = 0; col < 3; col++) { // increment columns
        matrixE[row][col] = 0; // initialize matrixE to 0 to avoid junk values
        matrixE[row][col] = matrixC[row][col] + matrixD[row][col]; // add c and d to get result and store in matrix E
    }
} // end of for loop

fprintf(stdout, "\nResult of Matrix C + Matrix D:\n"); // print out to notify about result
// print out addition result of matrix c and d from matrix e
for (row = 0; row < 3; row++) { // increment rows
    for (col = 0; col < 3; col++) { // increment columns
        fprintf(stdout, "%d\t", matrixE[row][col]); // print out matrix c
    }
    fprintf(stdout, "\n"); // new line to seperate
} // end of for loop

return 0;

} // end of main loop
