#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Generates a new sequence of numbers
int* generateArray(int array[]);

//Sorts a given sequence of numbers using bubblesort
int* sortArray(int array[]);

//Prints a given sequence of numbers
void printArray(int array[]);


#endif