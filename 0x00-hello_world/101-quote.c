#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the specified message to the standard error.
 * Return: Always 1 to indicate an error (per requirements)
 */
int main(void)
{
    /* Message to be printed to standard error */
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Using write system call to print to standard error */
    /* File descriptor 2 is used for standard error */
write(2, message, 59); /* 59 is the length of the message excluding the null terminator */

return (1);
}
