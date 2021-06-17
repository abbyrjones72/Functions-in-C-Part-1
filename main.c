#include <stdio.h>

/* 
   assignment must use 3 functions:
   one to get the data from the user
   one to perform the exponential calculation
   one to display the result
*/

/* prototype the three functions */
int square_this(int);
int get_data();
void display_result();

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
  display_result(num, squared_number);
  return 0;
}

/* function to get user data */
int get_data()
{
  int number;
  printf("Enter a number to square:\n");

  /* look up scanf() using man 3 scanf if using linux */
  scanf("%d", &number);
  return number;
}

/* function to perform exponential calculation */
int square_this(int number)
{
  /* simply returning number * number prevents any unneccesary
     memory allocations using variables */
  return number * number;
}

/* function to display the result */
void display_result(int number, int func)
{
  /* here, we are passing in an int and a function. we are
     allowed to do this because the function we are passing 
     in returns an int */
  printf("%d squared is %d\n", number, square_this(number));
}