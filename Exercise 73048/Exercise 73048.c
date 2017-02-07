#include <stdio.h>
int main ()
{
int integer1;
printf("Enter an integer to determine its parity:");
scanf("%d", &integer1);
if ((integer1 % 2) == 0)
	{printf(" The integer %d is even.", integer1);}
if ((integer1 % 2) != 0)
	{printf(" The integer %d is odd.", integer1);}
}
