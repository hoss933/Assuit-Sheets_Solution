#include <stdio.h>

int main()
{
    int N ,i=0,factorial=0;
    scanf("%d",&N);
    
    for(i =1; i <= N; i++)
    {
        if((N%i == 0))
        {
            factorial++;
        }
    }
    if(factorial == 2)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    return 0;
}