#include <stdio.h>

struct Vektor
{
    int initilized;
    int sorted;
    int array[100];
};

void main()
{

    struct Vektor mainArray;
    
    int loop = 1
    while(loop = 1)
    {
        int choice;
        printf("Välj opperation:\n");
        printf("  1. Generera en ny array\n");
        printf("  2. Sortera arrayen\n");
        printf("  3. Min/Max/median\n");
        printf("  4. Sök\n");
        printf("  8. Print array\n");
        printf("  9. Exit\n");
        scanf("%d", &choice);
        
        switch(choice)
            case 1:
            case 2:
            case 3:
            case 4:
            case 8:
            case 9:
                loop = 0;
            default:
                printf("Ej giltigt kommando\n");
                break;
            
    }
}