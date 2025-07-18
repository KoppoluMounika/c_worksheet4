/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define IS_LOWER(c) ((c) >= 'a' && (c) <= 'z')
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')

int main() {
    char ch;
    printf("Enter a char: ");
    scanf(" %c", &ch);  
    if (IS_LOWER(ch))
        printf("%c is lowercase.\n", ch);
    else if (IS_UPPER(ch))
        printf("%c is uppercase.\n", ch);
    else
        printf("%c invalid character.\n", ch);

    return 0;
}

