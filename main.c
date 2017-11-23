//Calculator program
#include <stdio.h>
#include <stdlib.h>

#include "menuIO.h"
#include "formulas.h"

int main()
{
    float num1, num2;
    int menu = selectMenuChoice(); //Variable for the number the user inputs
                                  //Float variables for the user input and output, used floats in case the user enters e.g. 14.7
    switch(menu) //switch statement for menu
    {
    case 1:
      printf("You entered Addition\n\n");
      num1 = firstNumber();
      num2 = secondNumber();
      printf("%.2f + %.2f = %.2f \n",num1, num2, addition(num1, num2));

      break;
    case 2:
      printf("You entered Subtraction\n\n");
      num1 = firstNumber();
      num2 = secondNumber();
      printf("%.2f - %.2f = %.2f \n",num1, num2, subtraction(num1, num2));

      break;
    case 3:
      printf("You entered Multiplication\n\n");
      num1 = firstNumber();
      num2 = secondNumber();
      printf("%.2f * %.2f = %.2f \n",num1, num2, multiplication(num1, num2));

      break;
    case 4:
      printf("You entered Division\n\n");
      num1 = firstNumber();
      num2 = secondNumber();
      printf("%.2f / %.2f = %.2f \n",num1, num2, division(num1, num2));

      break;
    default:
        printf("Enter correct number e.g 1 - 4\n"); //Outputted if the user enters a value other than 1 - 4
        break;
    }
    return 0;
}
//End of code
