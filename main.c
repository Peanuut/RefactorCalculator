//Calculator program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu; //Variable for the number the user inputs
     //Float variables for the user input and output, used floats in case the user enters e.g. 14.7

    printf("Enter a number from the list below\n\n");

    printf("1. Addition\n"); //Calculator menu, user must enter a value from 1 - 4 for the program to work
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");

    printf("Enter number: "); //User input for the calculator menu
    scanf("%d", &menu);

    printf("\n");

    switch(menu) //switch statement for menu
    {
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    default:
        printf("Enter correct number e.g 1 - 4\n"); //Outputted if the user enters a value other than 1 - 4
        break;
    }
    return 0;
}
//End of code
