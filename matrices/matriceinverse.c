/*
Student ID:
Student Name: Raja M. Sumeer
Module: Programming 2 @ Year 2, Semester 1 (Technological University Dublin)

Date: 12/12/2024

Code Purpose:
- Write a Program in C to calculate 2x2 matrice inverses

Tasks:
- Write a Program in C to calculate the 2x2 matrice inverses of:
A[5,6, 4,5] & B[6,4 3,3]

Supporting Code from Author(s):
Due Credits: 
*/

// function for determinant A ( 2x2 matrice) and Part 1.1
int determinantA(int a, int d, int b, int c) {
    return (a * d) - (b * c); // return calculation of formula a*d-b*c
}

// function for determinant B ( 2x2 matrice) and Part 1.2
int determinantB(int a, int d, int b, int c) {
    return (a * d) - (b * c); // return calculation of formula a*d-b*c
}

#include <stdio.h> // define preprocessor directive library for basic functions
#include <math.h> // define preprocessor directive library for math functions

int main() {

// Part 1.1

int a, d, b, c; // define integer return type variables for the determinant formula

a = 5, d = 5, b = 6, c = 4; // hardcore/declare values for the variables of determinant A

int detA; // define integer return type variable for the determinant (Matrice A)

float fraction; // define floating point return type variable for inverse determinant formula

detA = determinantA(a, d, b, c); // call function to get determinant of matrice A

fraction = 1.0 / detA; // A^-1 = 1/detA[]

int reverse_b; // define integer return type variable b
reverse_b = b * -1; // turn b into negative value

int reverse_c; // define integer return type variable c
reverse_c = c * -1; // turn c into negative value

fprintf(stdout, "Result of 2x2 Inverse Matrice A:\n"); // print out result to CL
fprintf(stdout, "Determinant A is '%d'\n", detA); // print out calculated determinant of A to CL
fprintf(stdout, "A^-1 = 1/%d [%d, %d\n\t%d, %d]", detA, d, reverse_b, reverse_c, a); // print out full form

// Part 1.2

a = 6, d = 3, b = 4, c = 3; // hardcore/declare values for the variables of determinant B

int detB; // define integer return type variable for the determinant (Matrice B)

detB = determinantB(a, d, b, c); // call function to get determinant of matrice B

fraction = 1.0 / detB; // B^-1 = 1/detB[]

reverse_b = b * -1; // turn b into negative value
reverse_c = c * -1; // turn c into negative value

float outsideXinside_a = fraction * a; // calculate 1/detB * inside matrice variables
float outsideXinside_b = fraction * reverse_b; // calculate 1/detB * inside matrice variables
float outsideXinside_c = fraction * reverse_c; // calculate 1/detB * inside matrice variables
float outsideXinside_d = fraction * d; // calculate 1/detB * inside matrice variables

fprintf(stdout, "\n\n"); // seperate new lines
fprintf(stdout, "Result of 2x2 Inverse Matrice B:\n"); // print out result to CL
fprintf(stdout, "Determinant B is '%d'\n", detB); // print out calculated determinant of B to CL
fprintf(stdout, "B^-1 = 1/%d [%.2f, %.2f\n\t%.2f, %.2f]", detB, outsideXinside_d, outsideXinside_b, outsideXinside_c, outsideXinside_a); // print out full form

return 0;

} // end of main loop
