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
    int Lowest_Num=A[0],position=1;
    for(int j=0; j<N; j++)
    {
        
        if(A[j] <  Lowest_Num)
        {
            Lowest_Num = A[j];
            position= j+1;
        }
    }
    printf("%d %d\n", Lowest_Num, position);
    return 0;
}