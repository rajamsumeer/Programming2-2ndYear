/*
Student ID:
Student Name: Raja Sumeer
Date: 01/11/2024 17:11
Code Purpose: Copying contents between 2 files.
--------------
--------------
Supporting Code from Author(s): Mark Deegan, GeeksForGeeks, Stackoverflow, Joeseph O.
Help Sources:
https://stackoverflow.com/questions/49063518/why-does-fgetc-return-int-instead-of-char
https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/
--------------
*/
#include <stdio.h> // define library for basic functions
#include <stdlib.h> // define library for other functions

int main() {
char name1[100];
char name2[100];
FILE *fptrCreate, *fptrCreate2, *fptr, *fptr2; // define file pointers for creating & later read + write
fptrCreate = fopen("file1.txt", "w"); // create the initial first file
fprintf(fptrCreate, "This is file 1 content!"); // write to first file some content
fclose(fptrCreate); // close the file with changes
printf("File 1 has been created.\n"); // print out to let you know first file was created

fptrCreate2 = fopen("file2.txt", "w"); // create the second file
fprintf(fptrCreate2, "This is file 2 content!"); // write to second file some content
fclose(fptrCreate2); // close the second file with changes
printf("File 2 has been created.\n");  // print out to let you know second file was created

printf("Enter the file name you wish to copy the contents from.\n"); // prompt to enter file name for copying contents
scanf("%s", &name1); // scan input from keyboard for copying file
fptr = fopen(name1, "r"); // open the file for reading contents using read mode
if (fptr == NULL) {  // if copying file doesn't exist or wrong extension, let you know
    printf("The file you want to open for copying contents cannot be accessed. Verify it exists and try again.");
    return 1; // exit command so it doesn't get stuck in a blank loop
}

printf("Enter the file name you wish to copy contents to.\n"); // prompt to enter second file for copying contents into
scanf("%s", &name2); // scan input from keyboard for writing to file
fptr2 = fopen(name2, "w"); // open second file and write to it using write mode
if (fptr2 == NULL) { // if writing to file doesn't exist or wrong extension, let you know
    printf("The file you want to copy contents to cannot be accessed. Verify it exists and try again.");
    return 2; // exit command so it doesn't get stuck in a blank loop
}

int content; // define int variable for writing content to, fgetc returns integers and not characters
while ((content = fgetc(fptr)) != EOF) { // while loop to read each content until End of File
    fputc(content, fptr2); // write read content into desired file
}
fclose(fptr); // close initial file
fclose(fptr2); // close second file
printf("Copied the contents to the desired file!"); // let you know file content was copied
return 0;
} // end of main loop
