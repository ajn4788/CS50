#include <stdio.h>
#include <string.h>

#define _XOPEN_SOURCE
#include <unistd.h>

char *crypt(const char *key, const char *salt);

/*
printf statements through the code were meant to help me visualize what was happening
*/

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }

    const char* hashed_word = NULL;

    const char* hash_given = argv[1];

    const char* salt = "50";

    char word[5];

    char* alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //check a-Z
    for (int x = 0; x < 52; x++)
    {
        word[0] = alphabet[x];

        //printf("%s\n", word);

        hashed_word = crypt(word, salt);

        if ( strcmp(hashed_word, hash_given) == 0 )
        {
            goto PRINT;
        }
    }

    //check aa-ZZ
    for (int x = 0; x < 52; x++)
    {
        word[0] = alphabet[x];

        //printf("%s\n", word);

        hashed_word = crypt(word, salt);

        if ( strcmp(hashed_word, hash_given) == 0 )
        {
            goto PRINT;
        }

        for (int y = 0; y < 52; y++)
        {
            word[1] = alphabet[y];

            //printf("%s\n", word);

            hashed_word = crypt(word, salt);

            if ( strcmp(hashed_word, hash_given) == 0 )
            {
                goto PRINT;
            }
        }
    }

    //check aaa-ZZZ
    for (int x = 0; x < 52; x++)
    {
        word[0] = alphabet[x];

        //printf("%s\n", word);

        hashed_word = crypt(word, salt);

        if ( strcmp(hashed_word, hash_given) == 0 )
        {
            goto PRINT;
        }

        for (int y = 0; y < 52; y++)
        {
            word[1] = alphabet[y];

            //printf("%s\n", word);

            hashed_word = crypt(word, salt);

            if ( strcmp(hashed_word, hash_given) == 0 )
            {
                goto PRINT;
            }

            for (int z = 0; z < 52; z++)
            {
                word[2] = alphabet[z];

                //printf("%s\n", word);

                hashed_word =  crypt(word, salt);

                if ( strcmp(hashed_word, hash_given) == 0 )
                {
                    goto PRINT;
                }
            }
        }
    }

    //check aaaa-ZZZZ
    for (int x = 0; x < 52; x++)
    {
        word[0] = alphabet[x];

        //printf("%s\n", word);

        hashed_word = crypt(word, salt);

        if ( strcmp(hashed_word, hash_given) == 0 )
        {
            goto PRINT;
        }

        for (int y = 0; y < 52; y++)
        {
            word[1] = alphabet[y];

            //printf("%s\n", word);

            hashed_word = crypt(word, salt);

            if ( strcmp(hashed_word, hash_given) == 0 )
            {
                goto PRINT;
            }

            for (int z = 0; z < 52; z++)
            {
                word[2] = alphabet[z];

                //printf("%s\n", word);

                hashed_word =  crypt(word, salt);

                if ( strcmp(hashed_word, hash_given) == 0 )
                {
                    goto PRINT;
                }

                for (int t = 0; t < 52; t++)
                {
                    word[3] = alphabet[t];

                    //printf("%s\n", word);

                    hashed_word =  crypt(word, salt);

                    if ( strcmp(hashed_word, hash_given) == 0 )
                    {
                        goto PRINT;
                    }
                }
            }
        }
    }

    PRINT: printf("%s\n", word);

    return 0;
}
