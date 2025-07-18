/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==1){
                printf("%d ",2*j-1);
            }
            else if(i%2==0){
                printf("%d ",2*j);
            }
        }
        printf("\n");
    }

    return 0;
}