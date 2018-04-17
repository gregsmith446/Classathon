#include <stdio.h> //printf
#include <cs50.h>
#include <stdlib.h> // atoi
#include <ctype.h>

int factorialize (int number)
{
    if (number == 0)
    {
        return 1;
    }
    return number * factorialize(number - 1);
}

int main (int argc, string argv[])
{
    // if the command line text isn't "./fact #"
    if (argc != 2)
    {
        printf("Error: must include a number to factorialize\n"); // tell the user to include a num
        return 1; // return the error code
    }

    // the num from the command line arg comes through as a str, so atoi converts it to an int
    int numToFact = atoi(argv[1]);

    //print this before
    printf("long long num: ");

    //print the sum of the fib numbers
    printf("%i\n", factorialize(numToFact));
}