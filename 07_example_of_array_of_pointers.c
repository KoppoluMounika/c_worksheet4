/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    const char *arr[]={"mounika","siva","subhas","vinod"};
    int l=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<l;i++){
        printf("\n%d.%s",i+1,arr[i]);
    }

    return 0;
}
