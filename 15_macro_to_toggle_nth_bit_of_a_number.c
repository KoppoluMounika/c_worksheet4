/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define TOGGLE(num,n) num^(1<<n)
int main()
{
    int num,n;
    printf("enter a number:");
    scanf("%d",&num);
    printf("enter n bit of a number:");
    scanf("%d",&n);
    printf("%d",TOGGLE(num,n));

    return 0;
}
