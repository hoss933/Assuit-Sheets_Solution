#include<stdio.h>

int main()
{
    int N,i=0;
    scanf("%d",&N);
    int A[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    int Counter =0;
    int min = A[0];
    for(int j=0; j<N; j++)
    {
        if(A[j]<min)
        {
            min=A[j];
        }
    }
    for(int j=0; j<N; j++)
    {
        if(A[j] == min)
        {
            Counter++;
        }
    }
    if(Counter % 2 != 0)
    {
        printf("Lucky\n");
    }else
    {
        printf("Unlucky\n");
    }
    return 0;
}