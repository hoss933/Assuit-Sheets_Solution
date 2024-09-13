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
    for(int j=0; j<N; j++)
    {
        if(A[j] <= 10)
        {
            printf("A[%d] = %d\n", j, A[j]);
        }else
        {
            /*Nothing*/
        }
    }
    return 0;
}