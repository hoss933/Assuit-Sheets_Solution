#include<stdio.h>

int main()
{
    char S;
    int N,X,i=0,j=0;
    scanf("%c",&S);
    scanf("%d",&N);
 
    for(i=0; i<N; i++)
    {
        scanf("%d",&X);

         for(j=0; j<X; j++)
        {
            printf("%c",S);
        }
        printf("\n");
    }
    
    return 0;
}