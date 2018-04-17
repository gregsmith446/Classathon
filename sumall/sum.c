//program that tells whether or not a number is prime
//after that, if the number is prime,
//it adds up all the prime numbers including the given number and returns that result

#include <stdio.h> //printf
#include <cs50.h>

bool isPrime(int);
int sumPrimes(int);

int main (void)
{
    int input = get_int("Enter Integer: ");
    printf("total is %i\n", sumPrimes(input));
}

bool isPrime (int num)
{
    for (int i = 2, max = num; i <= max - 1; i++)
    {
        if (!(num % i))
        {
            return false;
        }
    }
    return true;
}

int sumPrimes(int number)
{
    int sum = 0;
    for (int i = 2; i <= number; i++)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}


//COMMAND LINE VERSION
// int main (int argc, string argv[])
// {
//     // if the command line text isn't "./sum #"
//     if (argc != 2)
//     {
//         printf("Error: must include a number to sum\n"); // tell the user to include a num
//         return 1; // return the error code
//     }

//     // the num from the command line arg comes through as a str, so atoi converts it to an int
//     int numToFact = atoi(argv[1]);

//     //print this before
//     printf("sum of all the prime numbers: ");
// }