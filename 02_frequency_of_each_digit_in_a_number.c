/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long long n;
    printf("enter a number:");
    scanf("%lld",&n);
    int arr[10]={0};
    while(n!=0){
        int digit=n%10;
        arr[digit]++;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        if(arr[i]>0){
            printf("%d:%d times\n",i,arr[i]);
        }
    }

    return 0;
}
