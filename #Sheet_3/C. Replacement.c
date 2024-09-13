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
        if(A[j] < 0)
        {
            A[j]=2;
        }else if(A[j] > 0)
        {
            A[j]=1;
        }else
        {
            A[j]=0;
        }
        printf("%d ",A[j]);
    }
  
    return 0;
}