#include <stdio.h>
#include <stdlib.h>

int counter = 0;
void count_calls_of_function(){

  counter++;
  printf("The count of calls of my function is %d \n", counter);
}
int main()
{
   count_calls_of_function();
    count_calls_of_function();
     count_calls_of_function();
   return 0;
}
