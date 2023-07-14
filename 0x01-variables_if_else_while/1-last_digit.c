#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
        int n ,digit;
        digit = n % 10;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if ( digit > 5)
{
                printf("last digit of %d is %d and is greater than 5\n", n , digit);
}
        else if ( digit < 6 && digit !=0)
{
                printf("last digit of %d is %d and is less than 6 and not 0\n", n ,digit);
}
        else
{
                printf("last digit of %d is %d and is 0\n", n, digit);
}

        return (0);

}
