#include<stdio.h>

int main()
{
    int N,Counter=0;
    scanf("%i",&N);
    for(Counter=1;Counter<=12;Counter++)
    {
        printf("%d * %d = %d\n",N,Counter,(N*Counter));
    }
    return 0;
}