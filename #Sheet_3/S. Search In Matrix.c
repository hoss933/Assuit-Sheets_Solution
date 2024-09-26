#include<stdio.h>

int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int Array[N][M];
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d",&Array[i][j]);
        }
    }
    int X=0;
    scanf("%d",&X);
    
    int indicator=0;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(X == Array[i][j])
            {
                indicator++;
            }
        }
    }
    if(indicator >= 1)
    {
        printf("will not take number\n");
    }else
    {
        printf("will take number\n");
    }
    return 0;
}