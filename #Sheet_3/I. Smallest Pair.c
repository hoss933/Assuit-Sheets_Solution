#include<stdio.h>
#include<limits.h>

int main()
{
    int T;
    scanf("%d",&T);
    
    while(T--)
    {
        int N;
        scanf("%d",&N);
        int A[N];

        for(int i=0; i<N; i++)
        {
            scanf("%d",&A[i]);
        }
        int min_Sum= INT_MAX;
        

        for(int i=0; i<N-1; i++)
        {
            for(int j=i+1; j<=N; j++)
            {
                int Sum = A[i]+A[j]+j-i;
                if (Sum < min_Sum)
                {
                    min_Sum = Sum;
                }
            }
        }
        printf("%d\n",min_Sum);
    }
    
    
    return 0;
}