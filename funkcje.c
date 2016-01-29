#include <stdio.h>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "mnozenie.h"

int main()
{

float a = 34;
float b = 6.23;

printf("Dodawanie to: %f",dodawanie(a,b));
printf("Odejmowanie to: %f",odejmowanie(a,b));
printf("Mnozenie to: %f",mnozenie(a,b));

return 0;
}
