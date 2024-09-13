#include<stdio.h>

int main()
{
    int N,Counter=0;
    scanf("%d",&N);
    int X,Max=0;
    for(Counter=0;Counter<N;Counter++)
    {
        scanf("%d",&X);
        if(Max < X)
        {
            Max = X;
        }else{/*Nothing*/}
    }
    printf("%d",Max);
    return 0;
}