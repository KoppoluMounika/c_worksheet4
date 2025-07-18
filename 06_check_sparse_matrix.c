/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int row,col,mat[20][20];
    printf("enter number of rows and columns:");
    scanf("%d %d",&row,&col);
    printf("enter matrix elements:");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int c=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]=='0'){
                c++;
            }
        }
    }
    if(c>=(row*col)/2){
        printf("the matrix is sparse matrix");
    }
    else{
        printf("the matrix is not a sparse matrix");
    }

    return 0;
}
