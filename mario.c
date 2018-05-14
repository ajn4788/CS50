#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt user for height value
    int height;

        do
        {
            printf("Height: ");
            height = get_int();
        }
        while (height < 0 || height > 23);

    //Generate pyramid
    //Line

    for (int line = 0; line < height; line++ )
    {
        //Print Spaces
        for(int space = height - line; space > 1; space--)
        {
            printf(" ");
        }
            //Print Hashes
            for(int hashes = 0; hashes < line+2; hashes++)
            {
                printf("#");
            }
            printf("\n");
    }
}
