#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int d,y,m,nd;

d = get_int("enter number of days: ");

y = d/365;
d = d%365;
m = d/30;
nd = d%30;

printf("\n%d years, %d months, %d days\n", y, m, nd);
return 0;
 




}