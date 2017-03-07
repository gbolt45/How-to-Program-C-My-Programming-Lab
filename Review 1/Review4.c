#include <stdio.h>

int main()
{
   float amount;
   int num_years =10;
   int year_number;
   float mult = 1.01;
   puts("Enter the int amount");
   scanf("%f",&amount);

   for(year_number=0; year_number<num_years; year_number++)
   {
       amount=mult*amount;
       printf("Year %d, balance %.2f\n", year_number, amount);
   }
    return 0;

}
