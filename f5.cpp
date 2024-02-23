/*
* FILE: f5.cpp
* PROJECT : Focused Assignment 5
* PROGRAMMER : Aryankumar Jitendrabhai Malaviya
* FIRST VERSION : 2024 - 02 - 20
* DESCRIPTION : Write a program that gets integers from the user and determines which is the highest value.
*/

#include <stdio.h>

// Disables a specific compiler warning
#pragma warning(disable: 4996)

// Function prototypes for get input from the user 
int getNum(void);

// Function prototypes for modify the values of an array based on user input
void modifyArrayValues(int myNumbers[], int size);

// Function prototypes for find index has the highest number
int maxArrayValue(int myNumbers[], int size);


int main(void) 
{
    // Declare an array for store 10 numbers.
    int numbers[10];

   

    return 0;
}


int getNum()
{
    /* the array is 121 bytes in size; we'll see in a later lecture how we can
    improve this code */
    char record[121] = { 0 }; /* record stores the string */
    int number = 0;

    fgets(record, 121, stdin);
    /* extract the number from the string; sscanf() returns a number
    * corresponding with the number of items it found in the string */
    if (sscanf(record, "%d", &number) != 1)
    {
        /* if the user did not enter a number recognizable by
        * the system, set number to -1 */
        number = -1;
    }
    return number;
}
