
//The input/output library, a necessity for any C program.
#include <stdio.h>

int addValues(int x, int y)
{
  return x+y;
}

int subscractValues(int x, int y)
{
  return x-y;
}

int multiplyValues(int x, int y)
{
  return x*y;
}

float divideValues(int x, int y)
{
  float division=0.0;
  if(y>0){
	division = (float)x/ (float)y;
  }else{
	printf("Cannot operate between these numbers %d--%d \n", x,y);
  }
  return division;
}

int palindromeChecker(int j)
{
  int inversion = 0, jOrigValue, remnants;
  jOrigValue = j;
  while(j != 0)
  {
    remnants = j%10;
    inversion = inversion*10+remnants; 
    j = j/10;
  }
  if(jOrigValue==inversion){
    printf("This number is a palindrome. \n");
  }else{
    printf("This number is not a palindrome. \n");
  }
}

int leapYearChecker(int yeer)
{
  if(yeer%4 == 0 && yeer%100 != 0 || yeer%400==0){
    return 1;
  }else{
    return 0;
  }
}

int main()
{
  char userName[256];
  int siblingsAmount,value1,value2,value3,value4,operation1,operation3,operation4;
  float operation2;
  printf("In this program, you'll get the respective result of the addition, substraction, multiplication and division of 2 values. \n");
  printf("To start operating, we'll need your name: \n");
  scanf("%s",userName);
  printf("And we'll also need the number of the amount of siblings you have: \n");
  scanf("%d",&siblingsAmount);
  printf("Please input a number: \n");
  scanf("%d",&value1);
  printf("Please input another number: \n");
  scanf("%d",&value2);
  
  //Printing the results of the base operations.
  operation1=addValues(value1,value2);
  printf("The result of the sum between the two values is: %d \n", operation1);
  
  operation1=subscractValues(value1,value2);
  printf("The result of the substraction between the two values is: %d \n", operation1);
  
  operation1=multiplyValues(value1,value2);
  printf("The result of the multiplication between the two values is: %d \n", operation1);
  
  operation2=divideValues(value1,value2);
  printf("The result of the division between the two values is: %f \n", operation2);
  
  //Extra operations: Check if a 9 digit number is a palindrome & Check if a year is a leap year.
  printf("Please input a 9 digit number: \n");
  scanf("%d",&value3);
  operation3=palindromeChecker(value3);

  printf("Please input a year: \n");
  scanf("%d",&value4);
  operation4=leapYearChecker(value4);
  if (operation4 == 1){
    printf("The year %d is a leap year and my name is %s. \n", value4,userName);
  }else{
    printf("The year %d is not a leap year and I have %d sibling(s) \n", value4,siblingsAmount);
  }

  return 0;
}