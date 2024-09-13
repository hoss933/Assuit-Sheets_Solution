#include<stdio.h>

int main()
{
    int T,X,Y;
    scanf("%d",&T);

    for(int i=0; i<T; i++)
    {
        scanf("%d %d",&X,&Y);
        int min=0,Max=0,sum=0;

        if(X < Y)
        {
            min = X;
            Max = Y;
        }else
        {
            min = Y;
            Max = X;
        }
        for(int j=min+1; j<Max; j++)
        {
            if(j % 2 !=0)
            {
                sum += j;
            }
        }
        printf("%d\n",sum);

    }
    return 0;
}