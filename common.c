#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "common.h"



//
int* generateArray(int array[100])
{
    srand(time(NULL));
    
    int i;
    for(i = 0; i < 100; i++)
    {
        array[i] = rand() % 901;
    }
    
    return array;
}




//
int* sortArray(int array[100])
{
    int length = sizeof(array) / sizeof(array[0]);
    
    int x, y;
    for(x=0; x<length; x++)

	{
        for(y=0; y<length-1; y++)
		{
			if(array[y]>array[y+1])
			{
				int temp = array[y+1];
				
				array[y+1] = array[y];
				array[y] = temp;

			}
		}
	}
    
    return array;
}




//
void printSpaceCorrection(int num)
{
    
}


//
void printArray(int array[100])
{
    
}