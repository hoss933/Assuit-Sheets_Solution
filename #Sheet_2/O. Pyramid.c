#include<stdio.h>

int main()
{
    int N,i=0;
    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        int j=0;
        for(j=0; j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}