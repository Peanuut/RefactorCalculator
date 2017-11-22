#include <stdio.h>
#include "menuIO.h"

int firstNumber()
{
  float num1;
  printf("Enter first number: "); //User input for first number
  scanf("%f", &num1);
  return num1;
}

int secondNumber()
{
  float num2;
  printf("Enter second number: "); //User input for second number
  scanf("%f", &num2);
  return num2;
}

int selectMenuChoice()
{
  int menu;
  printf("Enter a number from the list below\n\n");

  printf("1. Addition\n"); //Calculator menu, user must enter a value from 1 - 4 for the program to work
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n\n");

  printf("Enter number: "); //User input for the calculator menu
  scanf("%d", &menu);

  printf("\n");
  return menu;
}
