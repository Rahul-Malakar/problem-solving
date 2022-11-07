#include <stdio.h>
#include <stdlib.h>

int rem, negrem, divisor;
int quotient = 0;

int division(int tempdividend, int tempdivisor)
{

    while (tempdividend >= tempdivisor)
    {
        int inc = 0;
        while (tempdividend > (tempdivisor << (inc + 1)))
           { inc++;}
        quotient += (1 << inc);
        tempdividend = tempdividend - (tempdivisor << inc);
    rem = tempdividend;
    printf("%d\n", rem); 
    }
    
   
    negrem = tempdividend - divisor;

    return quotient;
}

int main()
{
    int dividend;

    printf("\nEnter the Dividend: ");
    scanf("%d", &dividend);
    printf("\nEnter the Divisor: ");
    scanf("%d", &divisor);

    if ((dividend < 0 && divisor < 0) || (dividend >= 0 && divisor >= 0))
    {
        printf("\n%d / %d: quotient = %d", dividend, divisor, division(abs(dividend), abs(divisor)));
        printf("\n%d / %d: rem = %d", dividend, divisor, rem);
    }
    else
    {
        printf("\n%d / %d: quotient = %d", dividend, divisor, -division(abs(dividend), abs(divisor)) - 1);
        printf("\n%d / %d: rem = %d", dividend, divisor, -negrem);
    }
}