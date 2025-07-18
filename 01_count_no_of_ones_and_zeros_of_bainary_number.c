/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char num[20];
    printf("enter a number in bainary:");
    scanf("%s",num);
    int c0=0,c1=0;
    for(int i=0;i<strlen(num);i++){
        if(num[i]=='0'){
            c0++;
        }
        else if(num[i]=='1'){
            c1++;
        }
    }
    printf("no.of ones:%d  on.of zeros:%d",c1,c0);
    return 0;
}