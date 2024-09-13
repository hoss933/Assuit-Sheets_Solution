#include<stdio.h>
#include<string.h>

int main()
{
    int N,i=0;
    scanf("%d",&N);
    int A[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    
    int indicate =0;
    for(int j=0; j<N/2; j++)
    {
        if(A[j] == A[N-1-j])
        {
            indicate++;
        }
    }
    if(indicate == N/2)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    return 0;
}