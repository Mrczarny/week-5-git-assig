#include <Arduino.h>
#include <stdio.h>

// ruleset test
// put function declarations here:
int myFunction(int, int);

void setup()
{
  int option = 0;
  printf("Please select option:\n");
  printf("1 - calculate sum of two numbers \n");
  printf("2 - calculate multiplication of two numbers \n");
  scanf("%n", option);

  int one, two = 0;
  printf("Enter numbers: \n");
  scanf("%n", one);
  scanf("%n", two);

  switch (option)
  {
  case 1:

    break;
  case 2:
    /* code */
    break;

  default:
    break;
  }
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop()
{
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}