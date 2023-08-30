#include <stdio.h>

/**
 * fact: computes the factorial of a number.
 * 
 * n- The number whose factorial is computed.
 * Return- Returns the answer.
*/
long fact(long n);

int main(void)
{
    long num;

    printf("Enter number to compute factorioal: ");
    scanf("%lu", &num);

    printf("%lu! = %lu\n", num, fact(num));
    return 0;

}

long fact(long n)
{
    if(n < 0)
        return -1; /* check for bad arguemen*/

    if(n == 0)
        return 1;
    
    return(n * fact(n - 1));
}