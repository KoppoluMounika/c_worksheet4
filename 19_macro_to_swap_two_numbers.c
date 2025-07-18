/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SWAP(a,b) int temp = a; a = b; b = temp;
int main()
{
    int a,b;
    printf("enter a and b values:");
    scanf("%d %d",&a,&b);
    SWAP(a,b);
    printf("a:%d b:%d",a,b);

    return 0;
}
