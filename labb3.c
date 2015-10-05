#include <stdio.h>

#include "common.h"
#include "value.h"
#include "labb3.h"



int main()
{

    struct Vektor mainArray;
    mainArray.initilized = 0;
    mainArray.sorted = 0;
    
    int loop = 1;
    while(loop == 1)
    {
        int choice;
        printf("Välj opperation:\n");
        printf("  1. Generera en ny Talföljd.\n");
        printf("  2. Sortera arrayen.\n");
        printf("  3. Min/Max/median.\n");
        printf("  4. Sök.\n");
        printf("  8. Print array.\n");
        printf("  9. Exit.\n");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                mainArray.array = generateArray(mainArray.array);
                mainArray.initilized = 1;
                mainArray.sorted = 0;
                printArray(mainArray.array);
                break;
            case 2:
                if(mainArray.initilized == 1)
                {
                    mainArray.array = sortArray(mainArray.array);
                    mainArray.sorted = 1;
                    printArray(mainArray.array);
                }
                else
                {
                    printf("Ej giltig Talföljd.\nGenerera en ny först.\n");
                }
                break;
            case 3:
                if(mainArray.sorted == 1)
                {
                    valueOperations(mainArray.array);
                }
                 else
                {
                    printf("Ej giltig Talföljd.\nGenerera en ny Sortera först.\n");
                }
                break;
            case 4:
                if(mainArray.sorted == 1)
                {
                    int value;
                    printf("Vilket värde vill ni söka efter?\n");
                    scanf("%d", &value);
                    searchArray(mainArray.array, value);
                }
                 else
                {
                    printf("Ej giltig Talföljd.\nSortera först.\n");
                }
            case 8:
                printArray(mainArray.array);
                break;
            case 9:
                loop = 0;
                break;
            default:
                printf("Ej giltigt kommando.\n");
                break;
        }
            
    }
    return 1;
}