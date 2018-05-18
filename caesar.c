#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//Need to follow up - check50 :(

int main(int argc, string argv[])
{
    //Check for 2 arguements only
    if(argc != 2)
    {
        printf("Nope\n");
        return 1;
    }

    //Once I check for correct argv put key into an int k
    int k = atoi(argv[1]);

    //Check if the integer is non-negative
    if (k < 0)
    {
        printf("Nope\n");
        return 1;
    }
    else
    {
        //Prompt user for a code to encrypt
        string code = get_string();

        for(int i = 0, n = strlen(code); i < n; i++)
        {
            //Check if the letter is uppercase or lowercase then convert
            if islower(code[i])
                printf("%c", (((code[i] + k) - 97) % 26) + 97);
            else if isupper(code[i])
                printf("%c", (((code[i] + k) -65) % 26) +65);
            //if neither then just print whatever it is
            else
                printf("%c", code[i]);
        }
        printf("\n");
        return 0;
    }
}
