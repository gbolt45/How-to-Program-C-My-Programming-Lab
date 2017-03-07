#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=0;
    int sum=0;
    int a=0;

    while(n < 50){
        a = 1+2*n;
        sum=a+sum;
        n++;

    }

    printf("sum is %d\n", sum);
}
