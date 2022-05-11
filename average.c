#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)

{
int sum;
float average;

int x = get_int("x: ");
int y = get_int("y: ");
sum = x + y;
average = (float)(x+y)/2;

printf("Score sum %i\n", sum);

sleep(3);

printf("Average %f\n", average);


}