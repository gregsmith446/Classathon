#include <stdio.h> //printf
#include <cs50.h> // make command

// array of strings to hold the error messages err_txt[0, 1, 2]
    const char *msg_txt[] =
    {
        "Command Line Argument Must Contain 2 strings", // when user doesn't provide arguments
        "YES, the 2nd string does exist in the first string",
        "NO, the 2nd string NOT exist in the first string"
    };

// function that takes str1 and str2 as parameters
int strContains (string str1, string str2)
{
    //ints to hold necessary values for comparison
    int match = 0;
    int i = 0;
    int length1 = 0;
    int k = 0;
    int length2 = 0;
    int l = 0;

    // step 1 --> iterate through both strings

    while(str1[k] != '\0') //iterate through entire str1
    {
        length1++; //length1 starts at 0, increases until...
        k++; // k = to the last char in the string
    }

    while(str2[l] != '\0') //iterate through full str2
    {
        length2++; //length2 starts at 0, increases until..
        l++; // l = to the last char in the string
    }

    while (str2[i] != '\0') //while the character str[0, 1, 2, 3, etc] does not equal the end
    {
        for(int j = 0; j <= length1; j++) //initialize j, j will increase by 1 until <= length of the str1
        {
            if (str2[i] == str1[j]) //if str2 has a char match to str1
            {
                match++; // increase count of match by 1;
                if (match == length2) // if the match count = the length of string2
                {
                    printf("%s\nNumber of Exact (In Order) Character Matches: %d\n", msg_txt[1], match); //when there is an exact match
                    return 1;
                }
                else //when there is not an exact match
                    {
                        i++; //continue through str2 until end
                    }
            }
            else // if no match found throughout full iteration of str2
            {
                match = 0; //set match = 0;
            }
        }
        i++; //finish iterating through str2 until complete
    }
    printf("%s\nNumber of Exact (In Order) Character Matches: %d\n", msg_txt[2], match);
    return 0;
}

int main (int argc, string argv[])
{
    //if the command line text isn't (./string "string one" "string two")
     if (argc != 3)
    {
        printf("%s\n", msg_txt[0]); // tell the user to include 2 strings
        return 1; // return the error code
    }

    string str1 = argv[1]; //first string in cmd line arg
    string str2 = argv[2]; //second string in cmd line arg
    strContains(str1, str2); //tell the function where to find str1 + str2

    //print the two strings as is for the user to see
    printf("String 1: %s\nString 2: %s\n", str1, str2);
}