#include <stdio.h> //printf
#include <cs50.h>
#include <stdlib.h> // atoi
#include <ctype.h>

int sumFibs (int number)
{
    int prevNum = 0;
    int currNum = 1;
    int result = 0;
    while (currNum <= number)
    {
        if (currNum % 2 != 0)
        {
            result += currNum;
        }

        currNum += prevNum;
        prevNum = currNum - prevNum;
    }

    return result;
}

int main (int argc, string argv[])
{
    //if the command line text isn't "./fibo #"
     if (argc != 2)
    {
        printf("Error: must include a number to sum with\n"); // tell the user to include a num
        return 1; // return the error code
    }

    // the num from the command line arg comes through as a str, so atoi converts it to an int
    int numToFact = atoi(argv[1]);

    //print this before
    printf("sum of the fibonacci nums: ");

    //print the sum of the fib numbers
    printf("%i\n", sumFibs(numToFact));
}