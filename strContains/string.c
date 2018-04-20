#include <stdio.h> //printf
#include <cs50.h> // make command
#include <stdlib.h>
#include <ctype.h> //tolower

// strContains ()
// {
// }

int main (int argc, string argv[])
{
    //if the command line text isn't (./string "string one" "string two")
     if (argc != 3)
    {
        printf("Error: must include 2 separate strings after running program\n"); // tell the user to include 2 strings
        return 1; // return the error code
    }

    //2 strings, set to string 1 and 2
    string first = argv[1]; //first string in cmd line arg
    string second = argv[2]; //second string in cmd line arg

    //test -print the two strings as is
    printf("%s%s\n", first, second);
}

// Now I want to use tolower for both so I only have lowercase text
// Not sure how to apply the tolower function to both strings?
// Once I have lowercase text
// Loop through the strings - first and second
// if there any contents based on ASCII numbers in "second" that are in "first" (with a min length of 2)
// print true
// else
// print false