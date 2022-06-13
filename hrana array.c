#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string namirnica;
    string zacin;
}

hrana;

int main(void)
{

hrana kuhanje[2];

kuhanje[0].namirnica = "grah";
kuhanje[0].zacin = "biber";

kuhanje[1].namirnica = "mrkva";
kuhanje[1].zacin = "sol";

for (int i = 0; i < 2; i++)
{

if (strcmp(kuhanje[i].namirnica, "grah") == 0)
{
    printf("Found %s\n", kuhanje[i].zacin);
}}}