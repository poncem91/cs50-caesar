#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//program that encrypts messages using Caesar’s cipher

int main(int argc, string argv[])
{
    if (argc != 2) //make sure only one more argument added
    {
        printf("Error\n");
        return 1;
    }

    int k = atoi(argv[1]); //converts key to integer

    if (k >= 0) //checks if positive integer
    {
        string plaintext = get_string("plaintext: "); //gets plain text

        printf("ciphertext: ");

        for (int i = 0; i < strlen(plaintext) ; i++) //loops through each character
        {
            if (isalpha(plaintext[i])) //checks if letter in alphabet
            {
                if (isupper(plaintext[i])) //encrypts if uppercase
                {
                    int cyphernumu = ((plaintext[i] - 65 + k) % 26) + 65;
                    printf("%c", cyphernumu);
                }

                else if (islower(plaintext[i])) //encrypts if lowercase
                {
                    int cyphernuml = ((plaintext[i] - 97 + k) % 26) + 97;
                    printf("%c", cyphernuml);
                }
            }
            else
            {
                printf("%c", plaintext[i]); //leaves non-alpha as is
            }
        }
        printf("\n");
    }
    else
    {
        printf("Error\n");
        return 1;
    }
}