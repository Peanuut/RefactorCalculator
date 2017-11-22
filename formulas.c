

float addition()
{
  float num1, num2, result;

  printf("You entered Addition\n\n");

  printf("Enter first number: "); //User input for first number
  scanf("%f", &num1);

  printf("Enter second number: "); //User input for second number
  scanf("%f", &num2);

  printf("\n");

  result = num1 + num2; //Addition calculation

  printf("%.2f + %.2f = %.2f\n", num1, num2, result); //Addition output
  break;
}

float Subtraction()
{
  float num1, num2, result;

  printf("You entered Subtraction\n\n");

  printf("Enter first number: "); //User input for first number
  scanf("%f", &num1);

  printf("Enter second number: "); //User input for second number
  scanf("%f", &num2);

  printf("\n");

  result = num1 - num2; //Subtraction calculation

  printf("%.2f - %.2f = %.2f\n", num1, num2, result); //Subtraction output
  break;
}

float multiplication()
{
  float num1, num2, result;

  printf("You entered Multiplication\n\n");

  printf("Enter first number: "); //User input for first number
  scanf("%f", &num1);

  printf("Enter second number: "); //User input for second number
  scanf("%f", &num2);

  printf("\n");

  result = num1 * num2; //Multiplication calculation

  printf("%.2f * %.2f = %.2f\n", num1, num2, result); //Multiplication Output
  break;
}

float division()
{
  float num1, num2, result;
  
  printf("You entered Division\n\n");

  printf("Enter first number: "); //User input for first number
  scanf("%f", &num1);

  printf("Enter second number: "); //User input for first number
  scanf("%f", &num2);

  printf("\n");

  result = num1 / num2; //Division calculation

  printf("%.2f / %.2f = %.2f\n", num1, num2, result);
  break;
}
