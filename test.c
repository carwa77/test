#include <stdio.h>
#include "konst.h"

//float medelv (float x, float y);
/*Funktion som räknar ut medelvärde */
/*float medelv (float x, float y)
{
return ((x+y)/2);
}*/



int main()
{
int tal1, tal2;
char utskrift[20];
printf("Tal1? ");
scanf("%d", &tal1);
printf("Tal2? ");
scanf("%d", &tal2);
sprintf(utskrift,"Summa är %5.2f \n",tal1+tal2);
printf("fdsdf %s\n", utskrift);

return 0;
}
