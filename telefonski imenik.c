#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string ime;
    string broj;
}

imenik;

int main(void)
{

imenik telefonski[2];

telefonski[0].ime = "Filip";
telefonski[0].broj = "091 517 1620";

telefonski[1].ime = "Nikola";
telefonski[1].broj = "095 590 5119";

for (int i = 0; i < 2; i++)

   {
       if (strcmp(telefonski[i].ime, "Filip") == 0)
       {
           printf("Found %s\n", telefonski[i].broj);
       }
   }}


