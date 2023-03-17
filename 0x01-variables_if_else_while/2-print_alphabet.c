#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function is the entry point of the program.
 *              
 * Return: Always 0 (Success)
 */
int main() {
    char letter;
    
    letter = 'a';
    do {
        putchar(letter);
        letter++;
    } while (letter <= 'z');
    putchar('\n');
    return (0);
}
