#include<stdio.h>
#include <stdbool.h>

bool check_neighbors(int N, int M, char A[][M], int X, int Y);

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    char A[N][M];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%s", &A[i][j]);
        }
    }
    
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    if(check_neighbors(N, M, A, X, Y))
    {
        printf("yes\n");
    }else
    {
        printf("no\n");
    }
    return 0;
}
bool check_neighbors(int N, int M, char A[][M], int X, int Y) 
{
    bool all_neighbors_x = true;
    for(int dx=-1; dx<=1; dx++)
    {
        for(int dy=-1; dy<=1; dy++)
        {
            if((dx ==0) && (dy == 0))
            {
                continue;
            }
            int nx = X + dx;
            int ny = Y + dy;

            if((1<= nx && nx <= N) && (1<= ny && ny <= M)) 
            {
                if(A[nx-1][ny-1] != 'x')
                {
                    all_neighbors_x = false;
                    break;
                }
            }
        }
    }
    return all_neighbors_x;
}