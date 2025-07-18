/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("enter a sentance:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    int l=strlen(str);
    int t=0,c=0;
    for(int i=l;i>=0;i--){
        if(str[i]==' '){
            t=i;
            break;
        }
    }
    for(int i=0;i<l;i++){
        str[c++]=str[i];
        if(i==t){
            break;
        }
    }
    for(int i=0;i<c;i++){
        printf("%c",str[i]);
    }
    return 0;
}
