#include <stdio.h>

/* 
   assignment must use 3 functions:
   one to get the data from the user
   one to perform the exponential calculation
   one to display the result
*/

/* prototype the three functions */
int square_this(int number);
int get_data();
void display_result(int number);

int main(void) 
{
  /* yes, because get_data() returns an int, we can assign that
     to an variable of type int */
  int num = get_data();

  /* same principle as before, we can assign square_this() to
     an int */
  int squared_number = square_this(num);

  /* because display_result() takes two ints, and we have those
     defined above, we can use them as parameters */
  display_result(num);
  return 0;
}

/* function to get user data */
int get_data()
{
  int number;
  printf("Enter a number to square:\n");
  printf("We will decrement the numbers and also provide their squares.");
  /* look up scanf() using man 3 scanf if using linux */
  scanf("%d", &number);
  return number;
}

/* function to perform exponential calculation */
/* lets make this a bit more dynamic */
int square_this(int number)
{
  /* 
     simply returning number * number prevents any unneccesary
     memory allocations using variables
  */
  return number * number;
}

/* function to display the result */
void display_result(int number)
{
  while(number > 0)
  {
    /* because we prototyped square_this(), we can access it anywhere
       in the program and inside any function */
    int value = square_this(number);
    printf("%d squared is: %d\n", number, value);
    number--;
  }
}