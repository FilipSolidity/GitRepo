#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{

  int x = get_int("x: ");
  int y = get_int("y: ");
  int z = x*y-1;

  printf("%i\n", z);

{

if (z < 100)

sleep(2);

printf("suuucker: ");

else

printf("you won: ");


}}