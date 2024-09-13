#include<stdio.h>

int main()
{
    unsigned short N ,Counter=0;
    scanf("%d",&N);
    for(Counter=1;Counter<=N;Counter++)
    {
        if(N <= 1)
        {
            printf("-1\n");
        }else if(Counter%2 == 0)
        {
            printf("%d\n",Counter);
        }
    }
    
    return 0;
}