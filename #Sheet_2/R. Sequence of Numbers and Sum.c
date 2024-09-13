#include<stdio.h>

int main()
{
    int N,M;
    
    while(1)
    {
        scanf("%d %d",&N,&M);
        int min=0,Max=0,sum=0;

        if((N <= 0) || (M <= 0))
        {
            break;
        }
        if(N < M)
        {
            min = N;
            Max = M;
        }else
        {
            min = M;
            Max = N;
        }
        for(int j=min; j<=Max; j++)
        {
            printf("%d ",j);
            sum += j;
        }
        printf("sum =%d\n",sum);

    }
        
    
    return 0;
}