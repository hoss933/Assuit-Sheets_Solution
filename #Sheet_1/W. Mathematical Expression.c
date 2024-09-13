#include <stdio.h>
#include <math.h>

int main()
{
    int A,B,C;
    char S,Q;
    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
    
    if(S == '+')
    {
        if(C == (A+B))
        {
            printf("Yes\n");
        }else
        {
            printf("%d",(A+B));
        }
    }else if(S == '-')
    {
        if( C == (A-B))
        {
            printf("Yes\n");
        }else
        {
            printf("%d",(A-B));
        }
    }else if(S == '*')
    {
        if( C == (A*B))
        {
            printf("Yes\n");
        }else
        {
            printf("%d",(A*B));
        }
    }
    return 0;
}