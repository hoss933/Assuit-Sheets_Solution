#include<stdio.h>

int main()
{
    int N,i=0,j=0,factorial;
    scanf("%d",&N);

    for(i=2; i<=N; i++)
    {
        factorial=0;
        for(j=1; j<=i; j++)
        {
           if(i % j == 0)
            {
                factorial++;
            }
        }
        if(factorial == 2)
            printf("%d ",i);
        
    }
    
  
    return 0;
}