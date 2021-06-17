#include <stdio.h>

/* assignment must use 3 functions:
   one to get the data from the user
   one to perform the exponential calculation
   one to display the result
*/

/* three functions */
int square_this(int);
int get_data();
void display_result();

int main(void) 
{
  int num = get_data();
  int squared_number = square_this(num);
  display_result(num, squared_number);
  return 0;
}

/* function to get user data */
int get_data()
{
  int number;
  printf("Enter a number to square:\n");
  scanf("%d", &number);
  return number;
}

/* function to perform exponential calculation */
int square_this(int number)
{
  return number * number;
}

/* function to display the result */
void display_result(int number, int func)
{
  printf("%d squared is %d\n", number, square_this(number));
}