#include <stdio.h>
#include <stdlib.h>


//Helpfunction to searchArray
int privSearchArray(int array[], int value, int imin, int imax)
{
  while (imin <= imax)
    {
        int imid = ((imin + imax) / 2);
        if(array[imid] == value)
        {
            return imid; 
        }
        else if (array[imid] < value)
        {
            imin = imid + 1;
        }
        else         
        {
            imax = imid - 1;
        }
    }

  return -1;
}



//Searches a given sequence of numbers for a given value
void searchArray(int array[], int value)
{
    int place = privSearchArray(array, value, 0, (int) sizeof(array) / sizeof(array[0]));
    
    if(place >= 0)
    {
        int row = place / 10;
        int colum = place - (row * 10);
    
        printf("Talet finns på rad %d och kolumn %d\n", row, colum);
    }
    else
    {
        printf("Talet finns ej i talföljden.\n");
    }
}



//Calculates the Avarge of a given sequence of numbers
double valueAvrage(int array[], int length)
{
    int sum = 0;
    
    int i;
    for(i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    
    double avrage = (double) sum / (double) length;
    return avrage;
}



//Calculates the Medianvalue of a given sequence of numbers
double valueMedian(int array[], int length)
{

    
    if(length % 2 == 0)
    {
       int midpoint = length / 2;
       double median = (double) (array[midpoint] + array[midpoint -1]) / 2;
       
       return median;
    }
    else
    {
        int midpoint = (length / 2) + 1;
        double median = (double) array[midpoint];
        
        return median;
    }
}



//Calculates Min-, Max-, Median-, and Avragevalue of a given sequence of numbers
void valueOperations(int array[])
{
    int length = sizeof(array) / sizeof(array[0]);
    
    int min = array[0];
    int max = array[length];
    double median = valueMedian(array, length);
    double avrage = valueAvrage(array, length);
    
    printf("Minvärdet: %d\n", min);
    printf("Maxvärdet: %d\n", max);
    printf("Medianvärdet: %lf\n", median);
    printf("Medelvärdet: %lf\n", avrage);
}