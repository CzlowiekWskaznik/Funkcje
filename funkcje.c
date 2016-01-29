#include <stdio.h>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "mnozenie.h"

int main()
{

float a = 34;
float b = 6.23;

printf("Dodawanie to: %f\n",dodawanie(a,b));
printf("Odejmowanie to: %f\n",odejmowanie(a,b));
printf("Mnozenie to: %f\n",mnozenie(a,b));

return 0;
}
