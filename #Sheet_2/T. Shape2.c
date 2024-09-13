#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N-i; j++)
        {
            printf(" ");
        }
        int k=0;
        while(k != (2*i-1))
        {
            printf("*");
            k++;
        }
        printf("\n");
    }

    
    return 0;

}