#include<stdio.h>

int main()
{
    unsigned int N , Counter=0,Even=0,Odd=0,Negative=0,Positive=0;
    int X;
    scanf("%d",&N);
    for(Counter=0;Counter<N;Counter++)
    {
        scanf("%d",&X);
        if(X > 0)
        {
            Positive += 1;
        }if(X < 0)
        {
            Negative += 1;
        }if(X % 2 == 0)
        {
            Even += 1;
        }if(X % 2 != 0)
        {
            Odd += 1;
        } 
    }
    printf("Even: %d\n",Even);
    printf("Odd: %d\n",Odd);
    printf("Positive: %d\n",Positive);
    printf("Negative: %d\n",Negative);
    return 0;
}